#ifndef _ELEMENT_H_
#define _ELEMENT_H_

/*on definie la structure du client*/
typedef struct {
    int nb_ticket;
    float prix_totale;
} Client;

/* ELEMENT = client */
typedef Client ELEMENT; 

/* Prototypes adaptés */
void affiche_ELEMENT(ELEMENT element);
void saisir_ELEMENT(ELEMENT *ptr_elm);

#endif