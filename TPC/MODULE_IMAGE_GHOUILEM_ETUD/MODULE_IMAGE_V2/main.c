#include <stdio.h>
#include <stdlib.h>

#include "ghouilem_module_image.h"

/* AUTEUR : GHOUILEM ABDELHAFIDH                      */
/* DATE CREATION : 07/11/2025                      */
/*-------------------------------------------------*/

/* PROGRAMME DE TEST de FERRANE_MODULE_IMAGE */

int main(void)
{
	/* declaration des variables */
	int niv;
	int message;
	int ligne;
	int collone;
	int etat_lecture;
	
	/* séquence de test des fonction de FERRANE_MODULE_IMAGE */
	printf("DEBUT DE TEST MODULE \n");
	
	test_prog();
	
	
	/* recuperer lentrer utilisateur */
	scanf("%d", &niv);
	printf("TRACE : test du niveau avec la valeur : %d\n", niv);
	
	/* recuper le nombre de ligne et de colonne a partir du fichier .dat fournie */
	scanf("%d%d", &ligne, &collone);
	/* afficher le nombre de ligne et de colonne sur la premiére ligne pour le script python */
	printf("%d %d\n", ligne, collone);

	/* lire image*/
	etat_lecture = lire_image(ligne, collone);

	/* tester la l'écture */
	if (etat_lecture == 0){
	    printf("Erreur lors de la lecture de l'image\n");
	    return EXIT_FAILURE;
	}


	/* apelle de la fonction */
	message = afficher_image_codee_bis(niv, ligne, collone);

	/* afficher le message d'erreur */
	if (message == -1) {
	    printf("La valeur du niveau n'est pas valide\n");
	} else if (message == 0) {
	    printf("Le niveau de gris n'est pas une puissance de 2\n");
	} else if (message == 1) {
	    printf("La valeur est valide\n");
	}
	
	
	
	printf("FIN DE TEST MODULE \n");
	
	return EXIT_SUCCESS;   /*-- valeur de retour = succès exécution défini dans stdlib.h */
	
}
