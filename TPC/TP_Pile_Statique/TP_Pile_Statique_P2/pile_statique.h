#ifndef PILE_STATIQUE_H
#define PILE_STAITQUE_H

#include "element.h"
/*declaration d'une constante*/
#define MAX 5

	/*définir le type PILE*/
	typedef struct PILE{
		ELEMENT tab[MAX];
		int indice_tete;			
	}PILE;

	
	
	/*prototype des fonctions*/
	PILE init_PILE();
	void affiche_PILE(PILE pile);	
	int PILE_estVide(PILE pile);
	int PILE_estPleine(PILE pile);
	PILE emPILE(PILE pile, ELEMENT elm);
#endif
