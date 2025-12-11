#include <stdio.h>

/* Prototype des fonctions pour éviter les avertissements et erreurs */
/* Le compilateur les voit avant de lire la fonction main */
int somme_Nterminal(int n);
int somme_terminal(int n, int var);

/**
 * @brief Somme de 1 a N (Non-Terminale : Addition en attente)
 */
int somme_Nterminal(int n){ // Correction du type 'n'
    if(n==0){ // On s'arrete a 0 pour etre plus propre
        return 0;
    } 
    /* L'appel se fait a soi-meme */
    return n + somme_Nterminal(n-1); 
}

/**
 * @brief Somme de 1 a N (Terminale : Utilise un accumulateur)
 */
int somme_terminal(int n, int var){ // Correction des types 'n' et 'var'
    if (n==0){
        return var;
    }
    /* L'appel se fait a soi-meme. On stocke le resultat partiel (var+n) */
    return somme_terminal(n-1, var+n);
}

int main(void){
    int n = 10;
    int r1; 
    int r2;

    /* Pour la version terminale, l'accumulateur commence a 0 (caisse vide) */
    r1 = somme_Nterminal(n);
    r2 = somme_terminal(n, 0);

    printf("Resultat attendu : %d\n", (n*(n+1))/2);
    printf("Resultat R1 (Non-Terminal) : %d\n", r1);
    printf("Resultat R2 (Terminal) : %d\n", r2);

    return 0;
}