#ifndef __FILE_DYNAMIQUE_H__
#define __FILE_DYNAMIQUE_H__
#include "element.h"

	/*DEFINITION DES TYPES*/
	/*on definie la cellule (elle va contenir un ptr vers la cellule suivante et un element) */
	typedef struct cellule {
		/*ptr_suivant va pointer vers la cellule suivante*/
		struct cellule *ptr_suivant; /*on ne peut pas encore utiliser tp_cell alors on reecrit struct cellule*/
		ELEMENT elm; 		
	}tp_cell;
	
	typedef struct MA_FILE {
		tp_cell *tete;
		tp_cell *queue;
	}MA_FILE;  /*MA_FILE ça va pointer vers deux cellules le debut et la fin de la la_file*/

	
	/*DECLARATION DES PROTOTYPES*/
	MA_FILE init_FILE(void);
	int FILE_estVide(MA_FILE la_file);
	void affiche_FILE(MA_FILE la_file);
	MA_FILE enFILE(MA_FILE *la_file, ELEMENT elm);
	MA_FILE deFILE(MA_FILE *la_file, ELEMENT* ptr_elm);
	MA_FILE saisir_FILE(void);

#endif
