#include <stdio.h>
#include <stdbool.h>

int main(){

    int taille,elemRch;
    printf("Donner la taille : \n");
    scanf("%d",&taille);
    int tab[taille];
    printf("Remplisser le tableau :\n");
    for (int i = 0; i < taille; i++)
    {
        scanf("%d",&tab[i]);
    }
    printf("Donner l'élement à rechercher : \n");
    scanf("%d",&elemRch);
    bool ex;
    for(int i=0; i< taille; i++){
        if(tab[i]==elemRch){
            ex=true;
        }
    }
     if(ex){
            printf("element existe !!");
        }else{
            printf("element n'existe pas !!");
        }
    return 0;
}