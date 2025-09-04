#include<stdio.h>

int main(){

    int taille1,taille2;
    printf("le nombre d'éléments pour le premier tableau\n");
    scanf("%d",&taille1);
    printf("le nombre d'éléments pour le deuxieme tableau\n");
    scanf("%d",&taille2);
    int tab1[taille1], tab2[taille2];
    printf("Remplisser le premier tableau\n");
    for( int i =0; i<taille1; i++){
        scanf("%d",&tab1[i]);
    }
    printf("Remplisser le deuxieme tableau\n");
    for( int i =0; i<taille2; i++){
        scanf("%d",&tab2[i]);
    }

    int taille3=taille1+taille2;
    int tabFusione[taille3];
    int t;
    for( int i=0; i<=taille1; i++){
        tabFusione[i]=tab1[i];
        t=i;
    }
    for( int i=0; i<taille2 ; i++){
        tabFusione[t+i]=tab2[i];
    }
    printf("tableau fusioné !! \n");
    for(int i=0; i<taille3; i++){
        printf("%d\n",tabFusione[i]);
    }

    return 0;
}