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
		for (i=0; i<= pile.indice_tete; i++){
			affiche_ELEMENT(pile.tab[i]); /*on utilise la fonction affche_ELEMENT de element.c*/
		
		}
	printf("]\n");
	
}	
int PILE_estVide(PILE pile){
	if (pile.indice_tete == -1){
		/*elle retourne vrai si lindice_tete est a -1 (donc pas dans tab de la pile)*/
		return 1;
	}
	else {return 0;}

}
int PILE_estPleine(PILE pile){
	if (pile.indice_tete >= MAX -1){
		/*elle retourne vrai si lindice_tete ateint le maximum definie dans pile_statique.h*/
		return 1;
	} 
	else {return 0;}
}	
	
PILE emPILE(PILE pile, ELEMENT elm){
	/*tester si la pile est pleine*/
	if (PILE_estPleine(pile)){
		printf("ERREUR: la pile est pleine");
	}
	else{
		/*incrementer lindice de tete*/
		pile.indice_tete ++;
		/*ajouter un element a la pile*/
		pile.tab[pile.indice_tete] = elm;
	}
	return pile;
}
	

PILE dePILE(PILE pile, ELEMENT *ptr_elm){
	/*tester si la pile est vide*/
	if(PILE_estVide(pile)){
		printf("ERREUR: la pile est vide !");
	}
	else{
		/*decrementer lindice de tete*/
		pile.indice_tete --;
		/*recuperer lemement dpuis la pile*/
		*ptr_elm = pile.tab[pile.indice_tete];

	}
	return pile;
}

PILE saisir_PILE(PILE pile){
	/*declaration des variables*/
	int n;
	int i;
	ELEMENT elm;
	/*tester si la pile est pleine*/
	if(PILE_estPleine(pile)){
		printf("ERREUR: la pile est pleine !");
	}
	else{
		/*demander a lutilisateur combien d'élement la pile va contenir */
		printf("comnien d'élement voulez vous remplire");
		scanf("%d",&n);

		/*remplire la pile de n element*/
		for (i=0; i<n && !PILE_estPleine(pile);i++){
			saisir_ELEMENT(&elm); /*apelle la fonction de element.h pour saisir lelement*/
			pile = emPILE(pile, elm); /*on empile lelement saisie en utilisant la fonction emPILE*/
		}
		

	}
	return pile;


}