#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100];
    char sousChaine[100];

    printf("\nEntrez la chaine principale : ");
    fgets(chaine, sizeof(chaine), stdin);
    chaine[strcspn(chaine, "\n")] = 0; // supprimer le \n

    printf("Entrez la sous-chaine : ");
    fgets(sousChaine, sizeof(sousChaine), stdin);
    sousChaine[strcspn(sousChaine, "\n")] = 0; 

    if (strstr(chaine, sousChaine) != NULL) {
        printf("La sous-chaine \"%s\" est presente dans la chaine principale.\n", sousChaine);
    } else {
        printf("La sous-chaine \"%s\" n'est pas presente dans la chaine principale.\n", sousChaine);
    }

    return 0;
}
