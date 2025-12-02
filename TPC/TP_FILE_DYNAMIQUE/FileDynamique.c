#include <stdio.h>
#include <stdlib.h> /*pour utiliser malloc*/
#include "element.h"
#include "FileDynamique.h"

/*prend ladresse de la file initialise la tete et la queue de la file a null*/
void init_FILE(MA_FILE *new_file){
	new_file->tete = NULL;
	new_file->queue = NULL;
}

int FILE_estVide(MA_FILE la_fille){
	if (la_fille.tete == NULL){
		return 1;
	}return 0;
}


void affiche_FILE(MA_FILE la_fille){
	if (FILE_estVide(la_fille)){
		fprintf(stderr, "AFFICHAGE_ERREUR: la file est vide!");
		return la_fille;
	}
	new_tete = la_fille.tete;
	printf("[");
	while(!FILE_estVide(la_fille)){



	}
	printf("]");

}


