#include <stdio.h>
#include "element.h"
#include "FileDynamique.h"


int main(void){

    /*on saisie les elements*/
    ELEMENT elm1;
    saisir_ELEMENT(&elm1);
    ELEMENT elm2;
    saisir_ELEMENT(&elm2);
    ELEMENT elm3;
    saisir_ELEMENT(&elm3);

    /*initialiser la pile*/
    PILE pile; PILE pile2;
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

    /*test de la fonction dePILE*/

    /*les element a recupérer*/
    ELEMENT e1;
    ELEMENT e2;
    ELEMENT e3;

    pile = dePILE(pile, &e1);
    affiche_PILE(pile);

    pile = dePILE(pile, &e2);
    affiche_PILE(pile);
    
    pile = dePILE(pile, &e3);
    affiche_PILE(pile);
    

    /*test de la fonction saisir*/
    pile2 = saisir_PILE();
    affiche_PILE(pile2);
    
    return 0;
}