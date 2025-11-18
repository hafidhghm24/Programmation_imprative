#include <stdio.h>
#include "pile_statique.h"
#include "element.h"

int main() {

    /*initialisation */
    ELEMENT e;
    PILE ma_pile = init_PILE();
    printf("Après init_PILE() : ");
    affiche_PILE(ma_pile);
    

    /*test de la pile vide */
    if (PILE_estVide(ma_pile))
        printf("OK : la pile est vide\n");
    else
        printf("ERREUR : la pile devrait être vide\n");

    /* test de l'empilement */
    /*empiler 3 valeur*/
    e = 10; 
    ma_pile = emPILE(ma_pile, e);

    e = 20; 
    ma_pile = emPILE(ma_pile, e);

    e = 30; 
    ma_pile = emPILE(ma_pile, e);

    printf("Après empilement : ");
    affiche_PILE(ma_pile);

    /* test pile pleine */
    if (PILE_estPleine(ma_pile))
        printf("La pile est pleine.\n");

    /* test du dépilement */
    printf("\nDépilement :\n");

    ma_pile = dePILE(ma_pile, &e);
    printf("Élément dépilé = "); affiche_ELEMENT(e); printf("\n");

    ma_pile = dePILE(ma_pile, &e);
    printf("Élément dépilé = "); affiche_ELEMENT(e); printf("\n");

    printf("Pile après deux dépilements : ");
    affiche_PILE(ma_pile);

    /* test de la saisie complète de la pile */
    
    ma_pile = saisir_PILE(ma_pile);
    printf("Pile après saisie utilisateur : ");
    affiche_PILE(ma_pile);

    

    return 0;
}
