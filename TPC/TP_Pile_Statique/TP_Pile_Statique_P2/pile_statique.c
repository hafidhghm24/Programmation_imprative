#include <stdio.h>
#include "pile_statique.h"
#include "element.h"


PILE init_PILE(){
	/*initialisation de la pile*/
	PILE pile;
	/*initialisation de l'indice de téte*/
	pile.indice_tete = -1;
	
	return pile;
}

void affiche_PILE(PILE pile){
	int i;
	printf("[ ");
	printf("l'indice de la téte est : %d", pile.indice_tete);
		for (i=0; i< pile.indice_tete; i++){
			affiche_ELEMENT(pile.tab[i]);
		
		}
	printf("]");
	
}	
int PILE_estVide(PILE pile){
	if (pile.indice_tete == -1){
		return 1;
	}
	else {return 0;}

}
int PILE_estPleine(PILE pile){
	if (pile.indice_tete == MAX){
		return 1;
	} 
	else {return 0;}
	
	
PILE emPILE(PILE pile, ELEMENT elm){
	pile.tab[elm];
	pile.indice_tete ++;
}
	

