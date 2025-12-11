#include <stdio.h>

/* Changement : La fonction doit retourner un FLOAT */
float puissance_Nterminal(float x, int n){
    
    if (n==0){
        return 1.0f; // Correction : x^0 = 1.0
    }
    
    /* Correction : On utilise la multiplication simple. La fonction appelle ELLE-MÊME */
    return x * puissance_Nterminal(x, n-1); 
}


/* Changement : La fonction et l'accumulateur doivent être FLOAT */
float puissance_terminal(float x, int n, float var){ 

    if (n==0){
        return var; // Correction : On retourne l'accumulateur final
    }

    /* Correction : Appel de SOI-MÊME, et on passe le nouveau résultat (var * x) */
    return puissance_terminal(x, n-1, var * x);
}

int main(void){
    float n = 4.0;
    float x = 2.0;
    float r1; 
    float r2;

    r1 = puissance_Nterminal(x, (int)n);
    r2 = puissance_terminal(x, (int)n, 1.0f); // Initialisation de l'accumulateur à 1.0

    printf("2^4 (Attendu: 16.0)\n");
    printf("R1 (Non-Terminal) : %.1f\n", r1);
    printf("R2 (Terminal) : %.1f\n", r2);

    return 0;
}