#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main() {
    char chaine[100];

    printf("\nEntrez une chaine : ");
    fgets(chaine, sizeof(chaine), stdin);

    chaine[strcspn(chaine, "\n")] = 0;

    int taille = strlen(chaine);
    for (int i = 0; i<=taille; i++) {
        chaine[i] = toupper(chaine[i]); //toupper permet de  convertit un caractère en majuscule si c’est une lettre minuscule
    }

    printf("La chaine en majuscules est : %s\n", chaine);

    return 0;
}
