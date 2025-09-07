#include <stdio.h>
#include <string.h> 

int main() {

    char chaine1[100], chaine2[100];

    printf("\nEntrez la premiere chaine : ");
    fgets(chaine1, sizeof(chaine1), stdin);

    printf("Entrez la deuxieme chaine : ");
    fgets(chaine2, sizeof(chaine2), stdin);

    // Supprimer le saut de ligne \n ajouté par fgets
    chaine1[strcspn(chaine1, "\n")] = 0;
    chaine2[strcspn(chaine2, "\n")] = 0;

    
    strcat(chaine1, chaine2);

    printf("La chaine concatenee est : %s\n", chaine1);

    return 0;
}
