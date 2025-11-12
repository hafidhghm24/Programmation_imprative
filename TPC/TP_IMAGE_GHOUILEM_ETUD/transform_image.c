#include <stdio.h>


int main(){
	
	int i; int j;int ligne;int collone;int pixel;int seuil;int niv_gris;
	scanf("%d%d", &ligne, &collone);
	printf("%d %d\n", ligne, collone);
	seuil = 256/4;
	for (i=0; i<ligne; i++){
		for(j=0; j<collone; j++){
			scanf("%d", &pixel);
			niv_gris = pixel/seuil;
			printf("%d ", niv_gris);
			
			
		}
		printf("\n");
	}
	
	return 0;
}
