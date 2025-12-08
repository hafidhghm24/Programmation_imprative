#include <stdio.h>
#include "element.h"

/**
 * @brief Affiche un client
 */
void affiche_ELEMENT(ELEMENT element) {
    printf("[Tickets: %d | Prix: %.2f] ", element.nb_ticket, element.prix_totale);
}



/**
 * @brief Saisir un element
 */
void saisir_ELEMENT(ELEMENT *ptr_elm) {
    printf("Nombre de tickets desirés : ");
    scanf("%d", &(ptr_elm->nb_ticket));
    
    /*prix par defaut */
    ptr_elm->prix_totale = 0.0; 
}

