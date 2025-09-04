#include <stdio.h>

int main(){
    int nbr;
    printf("Donner un nombre :");
    scanf("%d",&nbr);
    printf("sa table de multiplication de 1 à 10 \n");
    for(int i=1;i<=10; i++){
        printf("%d * %d = %d ",nbr,i,nbr*i);
    }
    return 0;
}