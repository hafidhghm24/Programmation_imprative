#include <stdio.h>
#include "pile_statique.h"
#include "element.h"

int main(){
    PILE pl =  init_PILE();
    if (PILE_estVide(pl)){
    	printf("la pile est vide !");
    }
    else if (PILE_estPleine(pl)){
    	printf("la pile est pleine !");
    }
    else{
    	affiche_PILE(pl);
    }
    return 0;
}

