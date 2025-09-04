#include <stdio.h>

int main(){

    int n=0;
    printf("Donner la taille du tableau :\n");
    scanf("%d",&n);
    int tabOrinal[n],tabCopie[n];
    printf("Remplisser le tableau :\n");
    for (int i = 0; i < n; i++)
    {
        printf("Inserer un valeur :\n");
        scanf("%d",&tabOrinal[i]);
    }
    for (int i = 0; i < n; i++)
    {
        tabCopie[i]=tabOrinal[i];
    }

    printf("\nL'affichage de le tableau originaL :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d - ",tabOrinal[i]);
    }

    printf("L'affichage de le tableau copie :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d - ",tabCopie[i]);
    }

    return 0;
}