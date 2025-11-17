#include <stdio.h>
#include "PileDynamique.h"
#include "element.h"


PILE init_PILE(){
	return(NULL);
}




void affiche_PILE(PILE pile){
	PILE ptr_courant = pile; /*on creer un pointeur courant pour ne pas toucher a PILE*/
	printf("[ ");
	while(ptr_courant != NULL){
		affiche_ELEMENT(ptr -> elem);
		ptr_courant = ptr_courant -> ptr_suivant;
	}
	printf("]");
}



int PILE_estVide(PILE pile){
	if (PILE pile = NULL){
		return 1;
	}else return 0;
}

PILE emPILE(PILE pile, ELEMENT elm){
	
}
PILE* ptr_dePILE(PILE pile, ELEMENT elm){

}
PILE saisir_PILE(){}
