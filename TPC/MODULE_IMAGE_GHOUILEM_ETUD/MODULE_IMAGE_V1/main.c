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
	
	/* séquence de test des fonction de FERRANE_MODULE_IMAGE */
	printf("DEBUT DE TEST MODULE \n");
	
	test_prog();
	
	
	/* recuperer lentrer utilisateur */
	scanf("%d", &niv);
	printf("TRACE : test du niveau avec la valeur : %d\n", niv);
	
	/* apelle de la fonction */
	message = afficher_image_codee(niv);

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
