#include <stdio.h>
#include "element.h"

int main(void){
	/*DECLARATION VARIABLE*/
	ELEMENT elm1;
	ELEMENT elm2;
	ELEMENT elm3 = 18;
	/*apelle des fonction*/
	/*recuperer la saisi clavier*/
	saisir_ELEMENT(&elm1);
	affiche_ELEMENT(elm1);
	
	/*saisir le deuxiéme element*/
	saisir_ELEMENT(&elm2);
	affiche_ELEMENT(elm2);
	
	/*comparer les deux elements*/
	compare_ELEMENT(&elm1, &elm2);
	
	/*affecter un element a un autre element*/
	affect_ELEMENT(elm3, &elm2);
	
	/*afficher element*/
	affiche_ELEMENT(elm2);
	
	return 0;
}
