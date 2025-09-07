#include <stdio.h>

int main(){

    int n=0,element=0;

    printf("Donner la taille du tableau :\n");
    scanf("%d",&n);

    printf("Remplissage du tableau :\n");
    int tablCroissant[n];
    for (int i = 0; i < n; i++)
    {
        printf("inserer une valeur :\n");
        scanf("%d",&tablCroissant[i]);
    }

    for (int i= 0; i< n-1; i++ )
    {
        for (int j = i+1; j< n; j++)
        {
            if(tablCroissant[i]>tablCroissant[j]){
                element=tablCroissant[j];
                tablCroissant[j]=tablCroissant[i];
                tablCroissant[i]=element;
            }
        }
     }

    printf("------Affichage------\n");
    for (int  i = 0; i < n; i++)
    {
        printf("%d \n",tablCroissant[i]);
    }
    
    
    return 0;
}