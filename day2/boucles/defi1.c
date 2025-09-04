#include <stdio.h>

int main(){
    int nb,i=10;
    printf("Donner un nombre \n");
    scanf("%d",&nb);
    while (i>0)
    {
        printf("%d * %d = %d ",nb,i,nb*i);
        i--;
    }
    

    return 0;
}