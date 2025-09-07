#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100], resultat[100];
    int j = 0;

    printf("\nEntrez une chaine : ");
    fgets(chaine, sizeof(chaine), stdin);

    chaine[strcspn(chaine, "\n")] = 0;

    for (int i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] != ' ') { 
            resultat[j] = chaine[i];
            j++;
        }
    }
    resultat[j] = '\0'; 

    printf("La chaine sans espaces : %s\n", resultat);

    return 0;
}
