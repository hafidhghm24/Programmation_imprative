#ifndef __APPLICATION_H__
#define __APPLICATION_H__

    /*nombre de seances par jour*/
    #define NB_SEANCES 3

    /**
     * @brief definition d'un client (cellule)
     */
    typedef struct client{
        int nb_ticket;
        float prix_totale;
        struct client *client_suivant;
    }tp_client;

    /*remplacer ELEMENT(int) par tp_client(structure)*/
    typedef tp_client ELEMENT;


    /**
     * @brief initialisation de la caisse
     */
    void init_caisse(int *argent, int *nb_ticket_vendu);



#endif