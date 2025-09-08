#include <stdio.h>
#include <string.h>

struct Livre {
    char titre[50];
    char auteur[50];
    int annee;
};


struct Livre creerLivre() {
    struct Livre l;

    strcpy(l.titre, "Le Petit Prince");
    strcpy(l.auteur, "Antoine de Saint-Exupéry");
    l.annee = 1943;

    return l;
}

int main() {
    
    struct Livre monLivre = creerLivre();

    printf("\nTitre : %s\n", monLivre.titre);
    printf("Auteur : %s\n", monLivre.auteur);
    printf("Annee : %d\n", monLivre.annee);

    return 0;
}
