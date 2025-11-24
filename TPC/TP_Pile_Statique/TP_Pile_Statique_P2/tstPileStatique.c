/*   fichier progTestPileStat.c
     test de manipulation pour les PILEs statiques 
     
     Affiche des OK () si le test est correct et NOK () sinon */
/********************************************************/
#include <stdio.h>
#include "pile_statique.h"

int main()
{PILE p ; int e ; int i ;

p = init_PILE() ;
printf("OK (1)\n") ;

if (PILE_estVide(p)) printf("OK (2)\n") ; else printf("\t NOK (2)\n") ; 
if (!PILE_estPleine(p)) printf("OK (3)\n") ; else printf("\t NOK (3)\n") ; 

p = emPILE(p,1)  ;
printf("OK (4)\n") ;
if (!PILE_estVide(p)) printf("OK (5)\n") ; else printf("\t NOK (5)\n") ; 
if (!PILE_estPleine(p)) printf("OK (6)\n") ; else printf("\t NOK (6)\n") ; 

p = emPILE(p,2)  ;
printf("OK (7)\n") ;
if (!PILE_estVide(p)) printf("OK (8)\n") ; else printf("\t NOK (8)\n") ; 
if (!PILE_estPleine(p)) printf("OK (9)\n") ; else printf("\t NOK (9)\n") ; 

p = emPILE(p,3)  ;
printf("OK (10)\n") ;
if (!PILE_estVide(p)) printf("OK (11)\n") ; else printf("\t NOK (11)\n") ; 
if (!PILE_estPleine(p)) printf("OK (12)\n") ; else printf("\t NOK (12)\n") ; 

p = dePILE(p,&e)  ;
printf("OK (13)\n") ;
if (e==3) printf("OK (14)\n") ; else printf("\t NOK (14)\n") ; 
if (!PILE_estVide(p)) printf("OK (15)\n") ; else printf("\t NOK (15)\n") ; 
if (!PILE_estPleine(p)) printf("OK (16)\n") ; else printf("\t NOK (16)\n") ; 

p = dePILE(p,&e)  ;
printf("OK (17)\n") ;
if (e==2) printf("OK (18)\n") ; else printf("\t NOK (18)\n") ; 
if (!PILE_estVide(p)) printf("OK (19)\n") ; else printf("\t NOK (19)\n") ; 
if (!PILE_estPleine(p)) printf("OK (20)\n") ; else printf("\t NOK (20)\n") ; 

p = dePILE(p,&e)  ;
printf("OK (21)\n") ;
if (e==1) printf("OK (22)\n") ; else printf("\t NOK (22)\n") ; 
if (PILE_estVide(p)) printf("OK (23)\n") ; else printf("\t NOK (23)\n") ; 
if (!PILE_estPleine(p)) printf("OK (24)\n") ; else printf("\t NOK (24)\n") ; 

p = dePILE(p,&e)  ;
printf("OK (25)\n") ;
if (PILE_estVide(p)) printf("OK (26)\n") ; else printf("\t NOK (26)\n") ; 
if (!PILE_estPleine(p)) printf("OK (27)\n") ; else printf("\t NOK (27)\n") ; 

for (i = 0 ; i < MAX; i++)
  p = emPILE(p,i) ;
printf("OK (28)\n") ;

p = emPILE(p,1000) ;
printf("OK (29)\n") ;

if (PILE_estPleine(p)) printf("OK (30)\n") ; else printf("\t NOK (30)\n") ; 
if (!PILE_estVide(p)) printf("OK (31)\n") ; else printf("\t NOK (31)\n") ; 

p = dePILE(p,&e)  ;
printf("OK (32)\n") ;
if (e==99) printf("OK (33)\n") ; else printf("\t NOK (34)\n") ; 
if (!PILE_estVide(p)) printf("OK (35)\n") ; else printf("\t NOK (35)\n") ; 
if (!PILE_estPleine(p)) printf("OK (36)\n") ; else printf("\t NOK (36)\n") ; 
p = emPILE(p,1000) ;
printf("OK (37)\n") ;

return 0;
}


