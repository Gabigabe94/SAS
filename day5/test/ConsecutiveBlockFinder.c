#include <stdio.h>

int main(){

    int tab[30];
    int n;
    printf("\nDonner le nombre d'éléments du tableau :\n");
    scanf("%d",&n);

    printf("Remplisser le tableau :\n");
    for( int i=0; i<n; i++){
        scanf("%d", &tab[i]);
    }

    int number = tab[0], lenght = 1, maxLenght = 1;
    for ( int i=1; i < n; i++){
        if(tab[i]==tab[i-1]){
            lenght++;
        }else {
            lenght = 1;
        }
        if(lenght > maxLenght){
            maxLenght = lenght;
            number = tab[i];
        }
    }

    printf("Number: %d, Length: %d", number,maxLenght);

    return 0;

}