#include <stdio.h>
#include "pile_statique.h"
#include "element.h"


PILE init_PILE(PILE pile){
	
	/*initialisation de l'indice de téte*/
	pile.indice_tete = 0;
	
	return pile;
}

void affiche_PILE(PILE pile){
	
	if (indice_tete == 0){
		printf("la pile est déja vide !");
	
	}
	else {
		printf("l'indice de la téte est : %d", pile.indice_tete);
		for (int i; i< piel.indice_tete; i++){
			printf("%d", pile.tab[i]);
		}
	}
	


}
