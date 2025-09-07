#include <stdio.h>

int main (){

    int nbr;
    printf("Donner un nombre \n");
    scanf("%d",&nbr);
    if(nbr%2==0){
        printf("Nombre pair !!");
    }else{
        printf("Nombre impaire !!");
    }
    return 0;
    
}