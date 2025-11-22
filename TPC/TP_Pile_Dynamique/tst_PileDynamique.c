#include <stdio.h>
#include "element.h"
#include "PileDynamique.h"


int main(void){

    /*on saisie les elements*/
    ELEMENT elm1;
    saisir_ELEMENT(&elm1);
    ELEMENT elm2;
    saisir_ELEMENT(&elm2);
    ELEMENT elm3;
    saisir_ELEMENT(&elm3);

    /*initialiser la pile*/
    PILE pile;
    pile = init_PILE();

    
    /*afficher la pile vide */
    affiche_PILE(pile);

    /*test de la fonction empile*/
    pile = emPILE(pile, elm1);
    affiche_PILE(pile);

    pile = emPILE(pile, elm2);
    affiche_PILE(pile);

    pile = emPILE(pile, elm3);
    affiche_PILE(pile);

    
    return 0;
}