#include <stdio.h>

int main(){
    int nbr;
    printf("Saisir votre nombre :\n");
    scanf("%d",&nbr);
    if(nbr==0){
        printf("0\n");
    }
    while(nbr>0){
        int nbrInve=nbr%10;
        printf("%d",nbrInve);
        nbr=nbr/10;
    }
    return 0;
}