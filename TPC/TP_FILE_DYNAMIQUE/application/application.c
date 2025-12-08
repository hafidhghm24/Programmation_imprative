#include <stdio.h>
#include "application.h"
#include "element.h" 
#include "file_dyn.h"

/**
 * @brief initialiser l'argent de la caisse et le nombre de vente de la journee
 */
void init_caisse(float *argent, int *nb_ticket_vendu){
    *argent = 0.0;
    *nb_ticket_vendu = 0;
}



/**
 * @brief ajouter les clients a la file d'attente
 */
MA_FILE ajout_file(MA_FILE la_file, int nb_clients){
    int i;
    ELEMENT client; /* Variable temporaire pour stocker la saisie */

    for(i=0; i<nb_clients; i++){
        printf("\nClient [%d]: ", i+1);
        
        /*accueil du client */
        printf("Combien de tickets ? >> ");
        scanf("%d", &client.nb_ticket);

        /*calculer le prix total */
        client.prix_totale = client.nb_ticket * PRIX_SEANCE;
        printf("Prix total a payer : %.2f euros\n", client.prix_totale);

        /*ajouter le client a la file*/
        la_file = enFILE(la_file, client);
        printf("Client ajoute a la queue.\n");
    }

    return la_file;
}



/**
 * @brief Gestion de la journee : Remplir la file puis Encaisser (defiler)
 */
void encaissement(MA_FILE la_file, float *argent, int *nb_ticket_vendu){
    int i;
    int nb_clients_arrive;
    ELEMENT client_caisse; /* poour stocker le client qui sort de la file */

    /* toute la journée */
    for (i=0; i<NB_SEANCES; i++){
        printf("\nSCEANCE N°%d \n", i+1);
       

        /* nombre de client du jour*/
        printf("Combien de clients attendent aujourd'hui ? : ");
        scanf("%d", &nb_clients_arrive); 
        
        /* on remplit la file */
        la_file = ajout_file(la_file, nb_clients_arrive);

        printf("\ndebut encaissement\n");
        /* TANT QUE la file n'est pas vide, on sert les clients */
        while(!FILE_estVide(la_file)){
            
            /* on sort le client de la file*/
            la_file = deFILE(la_file, &client_caisse);

            /* On met l'argent dans la caisse */
            *argent += client_caisse.prix_totale;
            *nb_ticket_vendu += client_caisse.nb_ticket;

            /* Visuel */
            printf("client encaisse (+%.2f euro)\n", client_caisse.prix_totale);
        }
        printf("\nfin de la seance\n");
    }
}