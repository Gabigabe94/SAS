#include <stdio.h>

int main(){

    int n, vRemplacer, vNouvelle;
    printf("\nDonner le nombre d'éléments :\n");
    scanf("%d",&n);

    int tab[n];

    printf("Saisi les éléments du tableau :\n");
    for ( int i = 0; i< n; i++){
        scanf("%d",&tab[i]);
    }

    printf("Saisi la valeur à remplacer :\n");
    scanf("%d",&vRemplacer);

    printf("Saisi la nouvelle valeur :\n");
    scanf("%d",&vNouvelle);

    for ( int i = 0; i< n; i++){
        if(tab[i] == vRemplacer)
            tab[i] = vNouvelle; 
    }

    printf("====Affichage du tableau=======\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n",tab[i]);
    }
    

}