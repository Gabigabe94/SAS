#include <stdio.h>
#include <string.h>

#define NB_NOTES 5 

struct Etudiant {
    char nom[50];
    char prenom[50];
    int notes[NB_NOTES];
};

int main() {
    
    struct Etudiant etu;

    strcpy(etu.nom, "Alaoui");
    strcpy(etu.prenom, "Ahmed");

    etu.notes[0] = 15;
    etu.notes[1] = 12;
    etu.notes[2] = 18;
    etu.notes[3] = 14;
    etu.notes[4] = 16;

    printf("\nNom : %s\n", etu.nom);
    printf("Prenom : %s\n", etu.prenom);
    printf("======= Vos notes : ======");
    for (int i = 0; i < NB_NOTES; i++) {
        printf("\nNote %d : %d ", i+1,etu.notes[i]);
    }
    printf("\n");

    return 0;
}
