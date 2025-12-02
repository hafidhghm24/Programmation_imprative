#include <stdio.h>
#include "element.h"

void affiche_ELEMENT(ELEMENT element) {
    printf("%d ", element);
}

void saisir_ELEMENT(ELEMENT* ptr_elm) {
    printf("veuillez introduire l'element : ");
    scanf("%d", ptr_elm);
}

void compare_ELEMENT(ELEMENT* ptr_elm1, ELEMENT* ptr_elm2) {
    if (*ptr_elm1 > *ptr_elm2) {
        printf("%d > %d\n", *ptr_elm1, *ptr_elm2);
    } else if (*ptr_elm1 < *ptr_elm2) {
        printf("%d < %d\n", *ptr_elm1, *ptr_elm2);
    } else {
        printf("%d = %d\n", *ptr_elm1, *ptr_elm2);
    }
}

void affect_ELEMENT(ELEMENT ptr_elm1, ELEMENT* ptr_elm2) {
       *ptr_elm2 = ptr_elm1;
        printf("la valeur de l'élément a été mise à jour !\n");
   
}

