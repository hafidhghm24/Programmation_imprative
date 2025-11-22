#include <stdio.h>
#include <stdlib.h> /*pour utiliser malloc*/
#include "element.h"
#include "PileDynamique.h"




PILE init_PILE(){
	return(NULL);
}



void affiche_PILE(PILE pile){
	PILE ptr_courant = pile; /*on creer un pointeur courant pour ne pas toucher a PILE*/
	printf("[ ");
	while(ptr_courant != NULL){
		affiche_ELEMENT(ptr_courant->elm); /* equivalent a dire (ptr_counr)*.elm   */
		ptr_courant = ptr_courant->ptr_suivant; /*on change le .suiv (qui contenais ladresse vers cellule 1 )de ptr_courant par la remplacer par la VALEUR du .suiv (qui contien l'adresse de cellule 2)*/
	}
	printf("]\n");
}



int PILE_estVide(PILE pile){
	if (pile == NULL){
		return 1;
	}return 0;
}



PILE emPILE(PILE pile, ELEMENT elm){
	/*creer une nouvelle cellule*/
	tp_cell *new_cellule = malloc(sizeof(tp_cell));
	if (new_cellule == NULL){
		fprintf(stderr, "ERREUR: echec de lalocation dynamique");
		return pile;
	}

	/*remplire la cellule*/
	new_cellule->elm = elm;

	/*la nouvelle cellule pointe vers lancienne (FILO)*/
	new_cellule->ptr_suivant = pile; /* (new_cellule => PILE => NULL) */

	/*cette nouvelle cellule est la nouvelle tete de la pile (la premiére a sortir)*/
	return new_cellule;

}



PILE dePILE(PILE pile, ELEMENT *ptr_elm){
	if (PILE_estVide(pile)){
		print("ERREUR: la pile est deja vide");
		return(NULL);
	}

	tp_cell *ptr_tete = pile;	/*on pointe vers la cellule a supprimer (la tete)*/
	*ptr_elm = ptr_tete->elm;	/*on recupére la valeur .elm de la tete */
	PILE new_tete = ptr_tete->ptr_suivant;	/*la nouvelle tete va étre la cellule suivante pointé par la tete actuelle*/

	free(ptr_tete); /*on free la cellule a supprimer car on avais fait un malloc lors de l'empilation*/

	return new_tete;
}

