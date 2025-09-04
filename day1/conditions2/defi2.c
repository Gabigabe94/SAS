#include <stdio.h>
int main(){

    int age,typeVoiture,nbrAcci,primeBase=1000;

    printf("Donner l'Âge du conducteur :");
    scanf("%d",&age);
    printf("Type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale) :");
    scanf("%d",&typeVoiture);
    printf("Nombre d'accidents au cours des 5 dernières années :");
    scanf("%d",&nbrAcci);

    if(age<25){
        primeBase=primeBase*1.5;
    }else if(age>=25 && age<65){
        primeBase= primeBase;
    }else{
        primeBase=primeBase*1.2;
    }

    if(typeVoiture==1){
        primeBase=primeBase*2;
    }else if(typeVoiture==2){
        primeBase=primeBase*1.2;
    }else{
        primeBase=primeBase*1.1;
    }

    if(nbrAcci>1){
        primeBase= primeBase+primeBase*30/100;
    }
    printf("Prime d'Assurance Auto est %d",primeBase);
    return 0;

}