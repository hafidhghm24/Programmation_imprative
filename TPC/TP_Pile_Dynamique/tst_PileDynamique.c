#include <stdio.h>
#include "element.h"
#include "PileDynamique.h"


int main(void){

    /*on definie un element*/
    ELEMENT elm1;
    saisir_ELEMENT(&elm1);

    /*initialiser la pile*/
    PILE pile;
    pile = init_PILE(pile);

    
    /*afficher la pile*/
    affiche_PILE(pile);


    return 0;
}