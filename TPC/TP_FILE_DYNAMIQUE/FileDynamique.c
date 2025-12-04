#include <stdio.h>
#include <stdlib.h> /*pour utiliser malloc*/
#include "element.h"
#include "FileDynamique.h"

/*prend ladresse de la file initialise la tete et la queue de la file a null*/
MA_FILE init_FILE(void){
	MA_FILE new_file;
	new_file.tete = NULL;
	new_file.queue = NULL;
	return new_file;
}

int FILE_estVide(MA_FILE la_file){
	if (la_file.tete == NULL){
		return 1;
	}return 0;
}


void affiche_FILE(MA_FILE la_file){
	if (FILE_estVide(la_file)){
		fprintf(stderr, "AFFICHAGE_ERREUR: la file est vide!\n");
		return;
	}
	tp_cell *ptr_courant = la_file.tete;
	printf("[");
	/*parcourire la file jusqua la queue*/
	while(ptr_courant!=NULL){
		/*on affiche lelement de la celule avant de passer a la suivante*/
		affiche_ELEMENT(ptr_courant->elm);
		ptr_courant = ptr_courant->ptr_suivant;
	}
	printf("]\n");

}

MA_FILE enFILE(MA_FILE la_file, ELEMENT elm){
	/*creation de la nouvelle cellule a enfiler*/
	tp_cell *new_cell = malloc(sizeof(tp_cell));
	if(new_cell == NULL){
		fprintf(stderr, "ERREUR: probléme dalocation dynamique");
		return la_file;
	}
	
	/*definir la nouvelle cellule*/
	new_cell->elm = elm;
	new_cell->ptr_suivant = NULL;

	/*s'il ny as ni queue ni tete la cellule ajouter devien la queue et la tete*/
	if (la_file.tete == NULL){
		la_file.tete = new_cell;
		la_file.queue = new_cell;
	}
	else{
		/*la cellule davant pointe vers la cellule ajouter*/
		la_file.queue->ptr_suivant = new_cell ;
		/*la cellule ajouter devien la nouvelle queue*/
		la_file.queue = new_cell;

	}
	
	return la_file;
}

MA_FILE deFILE(MA_FILE la_file, ELEMENT *ptr_elm){
	if(FILE_estVide(la_file)){
		fprintf(stderr,"la pile est vide !\n");
		return la_file;
	}
	/*une cellule temporaire pour tete pour faire un free()*/
	tp_cell *temp_cell = la_file.tete;

	/*recupérer l'element de lancienne tete*/
	*ptr_elm = temp_cell->elm;
	
	/*la nouvelle tete cest la cellule pointé par la tete precedente*/
	la_file.tete = temp_cell->ptr_suivant;

	/*si la tete devien null (il y avais qune cellule dans la file)*/
	if(la_file.tete == NULL){
		la_file.queue = NULL;
	}

	/*libérer le malloc*/
	free(temp_cell);

	return la_file;
}
MA_FILE saisir_FILE(MA_FILE la_file){
	/*initialisation*/
	int n; 
	int i;
	ELEMENT elm;

	
	/*demander le nombre delement a saisir*/
	printf("combien de d'élement vous voulais ajouter : ");
	scanf("%d", n);

	/*ajouter chaque-element*/
	for (i = 0; i<=n ;i++){
		
		elm = saisir_ELEMENT(la_file.tete->elm);
		enFILE(la_file, elm);
		
	}

}

