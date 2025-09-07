#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main() {
    char chaine[100];

    printf("\nEntrez une chaine : ");
    fgets(chaine, sizeof(chaine), stdin);

    chaine[strcspn(chaine, "\n")] = 0;

    for (int i = 0; chaine[i] != '\0'; i++) {
        chaine[i] = tolower(chaine[i]); // tolower permet de convertit le caractère en minuscule s’il s’agit d’une majuscule
    }

    printf("La chaine en minuscules est : %s\n", chaine);

    return 0;
}
