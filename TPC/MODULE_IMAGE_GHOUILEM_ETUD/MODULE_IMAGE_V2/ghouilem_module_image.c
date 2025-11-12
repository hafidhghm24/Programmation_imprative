#include <stdio.h>
#include <stdlib.h>
#include "ghouilem_module_image.h"
#include <math.h>

/* AUTEUR : GHOUILEM ABDELHAFIDH                    */
/* DATE CREATION : 07/11/2025                      */
/*-------------------------------------------------*/


/* DECLARATION DES VARIABLE GLOBAL*/
int T[NB_MAX][NB_MAX];
int i; 
int j;

/* DEFINITIONS DES FONCTIONS déclarées dans le .h */
void test_prog(void)
{ 	
	printf("TEST DU MODULE : GHOUILEM_MODULE_IMAGE\n");
	
}

int lire_image(int ligne, int collone){
	if(ligne<=NB_MAX && collone<=NB_MAX){
		for (i=0; i<ligne; i++){
			for(j=0; j<collone; j++){
				scanf("%d", &T[i][j]);
			}
		}
		return 1;
	}else{
		printf("Erreur : Taille depasse la limite autorisee\n");
		return 0;
	}
	
}

int afficher_image_codee_bis(int niv, int ligne, int collone){
	/* declaration des variables */
	
	int pixel;
	int seuil;
	int niv_gris;
	double puissance2;
	
	/* calculer la puissance de 2 */
	puissance2 = log(niv) / log(2);
	
	/* verifie que les valeur sont entre 1 et 256 */
	if(niv<=256 && niv>=1){
		/* condition pour que se soit une puissance de 2 */	
		if (puissance2 == (int)puissance2){
			
			seuil = 256/niv;
			for (i=0; i<ligne; i++){
				for(j=0; j<collone; j++){
					pixel = T[i][j];
					niv_gris = pixel/seuil;
					printf("%d ", niv_gris);	
				}
				printf("\n");
			}
			return 1;
		}else {return 0;}
	}else{ return -1;}
	
	return 0;
}


