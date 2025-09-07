#include <stdio.h>
#include <string.h> 

int main() {
    char chaine[100];

    printf("Entrez une chaine : ");
    fgets(chaine, sizeof(chaine), stdin);

    // Supprimer le \n que fgets ajoute
    chaine[strcspn(chaine, "\n")] = 0;

    int longueur = strlen(chaine);

    printf("La chaine inversee est : ");
    for (int i = longueur - 1; i >= 0; i--) {
        printf("%c", chaine[i]);
    }
    printf("\n");

    return 0;
}
