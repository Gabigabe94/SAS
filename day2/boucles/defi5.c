#include <stdio.h>

int main (){
    
    int nbr,somme=0;
    printf("Donner un nombre entier : \n");
    scanf("%d",&nbr);
    for(int i=1; i<=nbr;i++){
        somme+=i;
    }
    printf("La somme est = %d",somme);

}