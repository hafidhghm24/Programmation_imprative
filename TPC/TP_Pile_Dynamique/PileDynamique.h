#ifndef PILE_DYNAMIQUE_H
#define PILE_DYNAMIQUE_H
#include "element.h"

	/*DEFINITION DES TYPES*/
	/*on definie la cellule (elle va contenir un ptr vers la cellule suivante et un element) */
	typedef struct cellule {
		/*ptr_suivant va pointer vers la cellule suivante*/
		struct cellule *ptr_suivant; /*on ne peut pas encore utiliser tp_cell alors on reecrit struct cellule*/
		ELEMENT elm; 		
	}tp_cell;
	
	typedef tp_cell *PILE;  /*la PILE cest un type,pointe vers la premier cellule de la pile*/

	
	/*DECLARATION DES PROTOTYPES*/
	PILE init_PILE();
	void affiche_PILE(PILE pile);
	int PILE_estVide(PILE pile);
	PILE emPILE(PILE pile, ELEMENT elm);
	PILE* ptr_dePILE(PILE pile, ELEMENT elm);
	PILE saisir_PILE();

#endif
