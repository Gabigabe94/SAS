#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100];
    char caractere;
    int compteur = 0;

    printf("\nEntrez une chaine : ");
    fgets(chaine, sizeof(chaine), stdin);

    chaine[strcspn(chaine, "\n")] = 0;

    printf("Entrez un caractere : ");
    scanf(" %c", &caractere);  // le " " avant %c ignore les espaces ou \n

    for (int i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] == caractere) {
            compteur++;
        }
    }

    printf("Le caractere '%c' apparait %d fois dans la chaine.\n", caractere, compteur);

    return 0;
}
