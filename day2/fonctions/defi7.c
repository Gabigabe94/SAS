#include <stdio.h>
#include <string.h>


void inverserChaine(char str[]) {
    int longueur = strlen(str);
    for (int i = 0; i < longueur / 2; i++) {
        char temp = str[i];
        str[i] = str[longueur - 1 - i];
        str[longueur - 1 - i] = temp;
    }
}

int main() {
    char chaine[100];

    printf("\nEntrez une chaîne : ");
    fgets(chaine, sizeof(chaine), stdin);

    // enlever le \n
    chaine[strcspn(chaine, "\n")] = '\0';

    inverserChaine(chaine);

    printf("Chaîne inversée : %s\n", chaine);

    return 0;
}
