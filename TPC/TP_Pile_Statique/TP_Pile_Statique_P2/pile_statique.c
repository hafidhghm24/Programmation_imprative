#include <stdio.h>
#include "pile_statique.h"
#include "element.h"


PILE init_PILE(){
	/*initialisation de la pile*/
	PILE pile;
	/*initialisation de l'indice de téte*/
	pile.indice_tete = 0;
	
	return pile;
}

void affiche_PILE(PILE pile){
	int i;
	if (pile.indice_tete == 0){
		printf("la pile est déja vide !\n");
	
	}
	else {
		printf("l'indice de la téte est : %d", pile.indice_tete);
		for (i=0; i< pile.indice_tete; i++){
			printf("%d", pile.tab[i]);
		}
	}
	


}
