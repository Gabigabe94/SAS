#include <stdio.h>
#include <stdbool.h>

void patternValidation( int arr[], int sizeArr){
    bool isValid = 1;
    for ( int i = 1; i < sizeArr; i++){
        isValid &= (arr[i-1] % 2 != arr[i]%2);
    }
     if(isValid){
        printf(" Pattern Valid !!\n");
    }else{
        printf(" Pattern InValid !!\n");
    }
}

int main (){

    int n;
    printf("\nDonner le nombre d'élément :\n");
    scanf("%d",&n);

    int tab[n];
    printf("Remplissage\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&tab[i]);
    }
    patternValidation(tab,n);
}