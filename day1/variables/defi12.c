#include <stdio.h>

int main(){

    int nb , inverse =0;
    printf("Donner un nombre à quatre chiffres : \n");
    scanf("%d",&nb);
    inverse=(nb%10)+(inverse*10);
    nb=nb/10;
    inverse=(nb%10)+(inverse*10);
    nb=nb/10;
    inverse=(nb%10)+(inverse*10);
    nb=nb/10;
    inverse=(nb%10)+(inverse*10);
    printf("L'ordre inverse :%d",inverse);
    return 0;
}