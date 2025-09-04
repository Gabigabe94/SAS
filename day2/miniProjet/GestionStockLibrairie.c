#include <stdio.h>

int main(){

    int choice=0;
    do{

        printf("1-Ajouter un livre au stock.\n");
        printf("2-Afficher tous les livres disponibles.\n");
        printf("3-Rechercher un livre par son titre.\n");
        printf("4.Mettre à jour la quantité d'un livre.\n");
        printf("5.Supprimer un livre du stock.\n");
        printf("6-Afficher le nombre total de livres en stock.\n");
        printf("7-Exit!!\n");
        printf("Saisir votre choix :\n");
        scanf("%d",&choice);

        switch (choice)
            {
                case 1:
                    printf("Ajouter\n");
                    break;
                case 2:
                     printf("afficher\n");
                     break;
                case 3:
                     printf("rechercher\n");
                     break;
                case 4:
                    printf("maj\n");
                    break;
                case 5:
                     printf("supprimer\n");
                    break;
                case 6:
                    printf("aficher total\n");
                     break;
                case 7:
                    printf("a bientot\n");
                    break;                        
    
                default:
                    printf("Saisir un nombre disponible dans le menu !!!");
                    break;
            }

    }while(choice!=7);

    return 0;
}