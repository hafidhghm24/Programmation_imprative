#include <stdio.h>
#include "application.h"
#include "file_dyn.h"

int main(void){

    /*---- VARIABLES ----*/
    float argent_caisse;
    int nb_tickets_total;
    MA_FILE file_cinema;

    
    /* 1. Initialisation */
    init_caisse(&argent_caisse, &nb_tickets_total);
    file_cinema = init_FILE(); 

    /*Lancement de la journee*/
    /* On passe les adresses (&) pour modifier les valeurs */
    encaissement(file_cinema, &argent_caisse, &nb_tickets_total);

    /*resultat de la journer*/
    printf("Nombre total de tickets vendus : %d\n", nb_tickets_total);
    printf("Argent total dans la caisse    : %.2f euros\n", argent_caisse);

    return 0;
}