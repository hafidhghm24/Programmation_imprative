#include <stdio.h>
#include <math.h>

int main(){
	//declaration des variables
	int i; 
	int j;
	int ligne;
	int collone;
	int pixel;
	int seuil;
	int niv_gris;
	double puissance2;
	int niv;
	
	//recuperer lentrer utilisateur
	scanf("%d", &niv);
	printf("la valeur de niveau introduit est : %d\n", niv);
	
	//calculer la puissance de 2
	puissance2 = log2(niv);
	
	//verifie que les valeur sont entre 1 et 256
	if(niv<256 && niv>1){
		//condition pour que se soit une puissance de 2	
		if (puissance2 == (int)puissance2){
			//recuper le nombre de ligne et de colonne a partir du fichier .dat fournie
			scanf("%d%d", &ligne, &collone);
	
			//afficher le nombre de ligne et de colonne sur la premiére ligne pour le script python 
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
		}else {fprintf(stderr, "ERREUR : le niveau de gris n’est pas une puissance de 2\n") ;}
	}else{fprintf(stderr, "ERREUR : le niveau de gris n’est pas valide\n");}
	
	return 0;
}
