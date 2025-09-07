#include <stdio.h>

int main() {
    char chaine[100]; // max 99 caractères + '\0'

    printf("Entrez une chaine de caracteres : ");
    fgets(chaine, sizeof(chaine), stdin); 

    printf("Vous avez saisi : %s", chaine);

    return 0;
}
