#include <stdio.h>
#include <stdlib.h>
#include "ghouilem_module_image.h"
#include <math.h>

/* AUTEUR : GHOUILEM ABDELHAFIDH                    */
/* DATE CREATION : 07/11/2025                      */
/*-------------------------------------------------*/

/* DEFINITIONS DES FONCTIONS déclarées dans le .h */

void test_prog(void)
{ 	
	printf("TEST DU MODULE : GHOUILEM_MODULE_IMAGE\n");
	
}
int afficher_image_codee(int niv){
	/* declaration des variables */
	int i; 
	int j;
	int ligne;
	int collone;
	int pixel;
	int seuil;
	int niv_gris;
	double puissance2;
	
	
	
	
	/* calculer la puissance de 2 */
	puissance2 = log2(niv);
	
	/* verifie que les valeur sont entre 1 et 256 */
	if(niv<=256 && niv>=1){
		/* condition pour que se soit une puissance de 2 */	
		if (puissance2 == (int)puissance2){
			/* recuper le nombre de ligne et de colonne a partir du fichier .dat fournie */
			scanf("%d%d", &ligne, &collone);
	
			/* afficher le nombre de ligne et de colonne sur la premiére ligne pour le script python */
			printf("%d %d\n", ligne, collone);
			seuil = 256/niv;
			for (i=0; i<ligne; i++){
				for(j=0; j<collone; j++){
					scanf("%d", &pixel);	
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


