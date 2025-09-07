#include <stdio.h>

int main(){

    int n,max,min;

    printf("\nDonner le nombre d'éléments d'un tableau :\n");
    scanf("%d",&n);

    int tabElements[n];

    printf("Veulliez saisir les éléments du tableau :\n");
    for(int i=0; i<n; i++){
        printf("Inserer une valeur :\n");
        scanf("%d",&tabElements[i]);
    }

    min = tabElements[0];
    max = tabElements[0];
    
    for (int i = 1; i < n; i++)
    {
        if(tabElements[i]<min){
            min=tabElements[i];
        }
        if(tabElements[i]>max){
            max=tabElements[i];
        }
    }

    printf("\nle plus petit élément dans le tableau est : %d\n",min);
    printf("le plus grand élément dans le tableau est : %d\n",max);

    
    return 0;
}