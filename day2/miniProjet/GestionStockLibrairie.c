#include <stdio.h>
#include <string.h>

#define MAXBOOKS 100
#define MAXTITLELENGHT 50
#define MAXAUTHORLENGHT 50

int rechercher(char tab[MAXBOOKS][MAXTITLELENGHT], int c)
{

    char search[MAXBOOKS];
    printf("Titre du livre : \n");
    getchar();
    fgets(search, sizeof(search), stdin);
    for (int i = 0; i < c; i++)
    {
        if (strcmp(search, tab[i]) == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    char titleBook[MAXBOOKS][MAXTITLELENGHT];
    char authorBook[MAXBOOKS][MAXAUTHORLENGHT];
    float priceBook[MAXBOOKS];
    int quantityInStock[MAXBOOKS];
    int numberBook = 0;
    int choice = 0;

    do
    {
        printf("====== Système de Gestion de Stock dans une Librairie ======\n");
        printf("--------------------------  MENU  --------------------------\n");
        printf("1-Ajouter un livre au stock.\n");
        printf("2-Afficher tous les livres disponibles.\n");
        printf("3-Rechercher un livre par son titre.\n");
        printf("4.Mettre à jour la quantité d'un livre.\n");
        printf("5.Supprimer un livre du stock.\n");
        printf("6-Afficher le nombre total de livres en stock.\n");
        printf("7-Exit !!!\n");
        printf("-------------------- Saisir votre choix ---------------------\n");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:

            printf("Entrer le titre de livre :\n");
            getchar();
            fgets(titleBook[numberBook], sizeof(titleBook), stdin);
            printf("Entrer le nom de l'auteur du livre :\n");
            getchar();
            fgets(authorBook[numberBook], sizeof(numberBook), stdin);
            printf("Entrer le prix de livre :\n");
            scanf("%f", &priceBook[numberBook]);
            printf("Entrer la quantitée :\n");
            scanf("%d", &quantityInStock[numberBook]);
            numberBook++;
            // printf("%d",numberBook);
            break;

        case 2:

            printf("-------Liste de livres---------\n");
            for (int i = 0; i < numberBook; i++)
            {
                printf("Titre de livre : %s, nom de l'auteur : %s, le prix : %0.2f, le nombre total de livres en stoc : %d. \n", titleBook[i], authorBook[i], priceBook[i], quantityInStock[i]);
            }
            printf("-------Liste de livres---------\n");
            break;

        case 3:
            int position = rechercher(titleBook, numberBook);
            if (position == -1)
            {
                printf("Le livre n'existe pas \n");
            }
            else
            {
                printf("Titre de livre : %s, nom de l'auteur : %s, le prix : %0.2f, le quantite : %d. \n", titleBook[position], authorBook[position], priceBook[position], quantityInStock[position]);
            }
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
            printf("Saisir un nombre disponible dans le menu !!!\n");
            break;
        }

    } while (choice != 7);

    return 0;
}