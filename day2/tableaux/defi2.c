#include <stdio.h>

int main(){

    // comments
    int n,tabElements[n];

    printf("Donner le nombre d'éléments d'un tableau :\n");
    scanf("%d",&n);

    printf("Veulliez saisir les éléments du tableau :\n");
    for(int i=0; i<n; i++){
        printf("Inserer une valeur :\n");
        scanf("%d",&tabElements[i]);
    }
    printf("L'affichage des elements : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",tabElements[i]);
    }
    
    return 0;
}