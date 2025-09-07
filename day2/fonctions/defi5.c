#include <stdio.h>

int factorielle(int n) {
    int resultat = 1;
    for (int i = 2; i <= n; i++) {
        resultat *= i;
    }
    return resultat;
}

int main() {
    int nombre;

    printf("\nEntrez un entier positif : ");
    scanf("%d", &nombre);

    if (nombre < 0)
        printf("Erreur : le nombre doit être positif.\n");
    else
        printf("La factorielle de %d est : %d\n", nombre, factorielle(nombre));

    return 0;
}
