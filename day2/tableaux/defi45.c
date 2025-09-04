#include <stdio.h>

int main(){

    int n,tabElements[n],max,min;

    printf("Donner le nombre d'éléments d'un tableau :\n");
    scanf("%d",&n);

    printf("Veulliez saisir les éléments du tableau :\n");
    for(int i=0; i<n; i++){
        printf("Inserer une valeur :\n");
        scanf("%d",&tabElements[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if(tabElements[i]<tabElements[i+1]){
            min=tabElements[i];
        }
        if(tabElements[i]>tabElements[i+1]){
            max=tabElements[i];
        }
    }

    printf("le plus petit élément dans le tableau est : %d\n",min);
    printf("le plus grand élément dans le tableau est : %d",max);

    
    return 0;
}