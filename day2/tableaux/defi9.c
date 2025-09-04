#include <stdio.h>

int main(){

    int tab[]={4,7,9,1,10}; 
    printf("Le tableau original !!\n");
    int taille = sizeof(tab)/sizeof(tab[0]);
    
    for( int i=0; i<taille; i++){
        printf("%d\n",tab[i]);
    }
    
    int tabInver[taille];
    for (int i=0; i < taille; i++){
        tabInver[i]=tab[taille-i-1];
    }
    printf("Tableau inversé !!\n");
    for (int i = 0; i < taille; i++)
    {
        printf("%d \n",tabInver[i]);
    }
    

    return 0;
}