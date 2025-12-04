#include <stdio.h>
#include "element.h"
#include "file_dyn.h"

int main(void){
    /* DECLARATION DES VARIABLES */
    MA_FILE ma_file;
    ELEMENT un_element;
    ELEMENT elm;


    /* --- INITIALISATION --- */
    printf("\nTEST: init_FILE()\n");
    ma_file = init_FILE();
    

    printf("\nTEST: enFILE()\n");
    
    /* On ajoute 10 */
    un_element = 10;
    ma_file = enFILE(ma_file, un_element);
    affiche_FILE(ma_file);

    /* On ajoute 20 */
    un_element = 20;
    ma_file = enFILE(ma_file, un_element);
    affiche_FILE(ma_file);

    /* On ajoute 30 */
    un_element = 30;
    ma_file = enFILE(ma_file, un_element);
    affiche_FILE(ma_file);

    
    printf("\nTEST: deFILE()\n");
    ma_file = deFILE(ma_file, &elm);
    printf("on as recuperer lelement suivant : ");
    affiche_ELEMENT(elm); /* elle dooit afficher 10 (recuperer a la derniere cellule) */

    printf("\nnotre nouvelle file :");
    affiche_FILE(ma_file); /* Doit afficher [ 20 30 ] */

    printf("\nTEST: saisir_FILE()\n");
    ma_file = saisir_FILE(ma_file);
    affiche_FILE(ma_file);


    return 0;
}