#include <stdio.h>
#include "element.h"
#include "PileDynamique.h"



PILE init_PILE(){
	return(NULL);
}


/*ceque jai compris cest quon commence par initialiser la PILE (qui point vers le premier element de la pile) ensuite on creer un ptr_courant qui va étre de type pile pour eviter de toucher a PILE et donc il va avoir un .elm et un .suivant et pour afficher la pile on met PILE en entrer et laffecter a ptr_courant ensuite tant que ptr_courant est pas NULL on va afficher le .elm de ptr_courant donc le .elm de PILE mais ensuite ceque je comprend pas cest  comment on passe vers la premiére cellule ensuite la deuxiéeme ...etc car la on fait ça ptr_courant = ptr_courant->ptr_suivant; et la ceque je vois cest que vu que ptr_courant contient .elm et .suiv de PILE il va prendre .suiv de lui meme donc il ne chage pas alors il ne passe jamais al*/

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
	}else return 0;
}

PILE emPILE(PILE pile, ELEMENT elm){
	/*initialiser le pointeur courant*/
	PILE ptr_courant = pile;

	/*on creer une nouvelle cellule*/
	tp_cell cellule

	/*on pointe vers la nouvelle cellule*/
	ptr_courant->ptr_suivant = cellule.ptr_suivant


}
