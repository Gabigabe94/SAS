#include <stdio.h>
int main(){

    int nbr;
    printf("Donner un nombre :");
    scanf("%d",&nbr);
    int b;
    while (nbr>0)
    {
        b=nbr%2;
        nbr=nbr/2;
        printf("%d",b);
    }
    return 0;
    

}