#include <stdio.h>
#include <string.h>

#define MAXBOOKS 100
#define SIZETITLE 100
#define SIZEAUTHOR 30

char titleBook[MAXBOOKS][SIZETITLE];
char authorBook[MAXBOOKS][SIZEAUTHOR];
float priceBook[MAXBOOKS];
int quantityInStock[MAXBOOKS];
int numberBooks = 0;

int rechercher()
{

    char search[MAXBOOKS];
    printf("Titre du livre : \n");
    getchar();
    fgets(search, sizeof(search), stdin);
    for (int i = 0; i < numberBooks; i++)
    {
        if (strcmp(search, titleBook[i]) == 0)
        {
            return i;
        }
    }
    return -1;

}

void afficher()
{

    for (int i = 0; i < numberBooks; i++)
    {
        printf("Livre numéro %d\n",i+1);
        printf("Titre de livre : %s,\n", titleBook[i]);
        printf("Nom de l'auteur : %s,\n", authorBook[i]);
        printf("Le prix : %0.2f DH,\n", priceBook[i]);
        printf("Le nombre total de livres en stoc : %d.\n", quantityInStock[i]);
    }
}

int main()
{

    int choice = 0;

    do
    {
        printf("====== Système de Gestion de Stock dans une Librairie ======\n");
        printf("--------------------------  MENU  --------------------------\n");
        printf("1- Ajouter un livre au stock.\n");
        printf("2- Afficher tous les livres disponibles.\n");
        printf("3- Rechercher un livre par son titre.\n");
        printf("4- Mettre à jour la quantité d'un livre.\n");
        printf("5- Supprimer un livre du stock.\n");
        printf("6- Afficher le nombre total de livres en stock.\n");
        printf("7- Quitter !!!\n");
        printf("-------------------- Saisir votre choix ---------------------\n");
        scanf("%d", &choice);
        // getchar();
        int position;
        switch (choice)
        {
        case 1:
            if (numberBooks >= MAXBOOKS)
            {
                printf(" Le stock est plein, impossible d'ajouter plus de livres.\n");
            }
            printf("Entrer le titre de livre :\n");
            getchar(); // vider buffer
            fgets(titleBook[numberBooks], SIZETITLE, stdin);
            titleBook[numberBooks][strcspn(titleBook[numberBooks], "\n")] = 0;

            printf("Entrer l'auteur du livre :\n");
            fgets(authorBook[numberBooks], SIZEAUTHOR, stdin);
            authorBook[numberBooks][strcspn(authorBook[numberBooks], "\n")] = 0;

            printf("Entrer le prix du livre :\n");
            scanf("%f", &priceBook[numberBooks]);

            printf("Entrer la quantitée en stock :\n");
            scanf("%d", &quantityInStock[numberBooks]);

            numberBooks++;
            printf(" Livre ajouté avec succès !\n");
            break;

        case 2:

            if (numberBooks == 0)
            {
                printf("Y a pas des livres dans la librairie !!\n");
            }
            else
            {
                printf("------- Liste de livres disponibles---------\n");
                afficher();
                printf("------- Liste de livres disponibles---------\n");
            }
            break;

        case 3:
            
            position = rechercher();
            if (position == -1)
            {
                printf("Le livre n'existe pas !!\n");
            }
            else
            {
                printf("====== Détails de livre =========");
                printf("Titre de livre : %s,\n", titleBook[position]);
                printf("Nom de l'auteur : %s,\n", authorBook[position]);
                printf("Le prix : %0.2f,\n", priceBook[position]);
                printf("Le nombre total de livres en stoc : %d.\n", quantityInStock[position]);
            }
            break;

        case 4:

            position = rechercher();
            if (position == -1)
            {
                printf("Le livre n'existe pas \n");
            }
            else
            {
                int newQuantity;
                printf("Saisir la nouvelle quantitée :\n");
                scanf("%d\n", &newQuantity);
                quantityInStock[position] = newQuantity;
                printf("====== Modification effectuée avec succés ======");
            }
            break;

        case 5:

            position = rechercher();
            if (position == -1)
            {
                printf("Le livre n'existe pas \n");
            }
            else
            {
                for (int i = position; i < numberBooks; i++)
                {
                    strcpy(titleBook[i], titleBook[i + 1]);
                    strcpy(authorBook[i], authorBook[i + 1]);
                    priceBook[i] = priceBook[i + 1];
                    quantityInStock[i] = quantityInStock[i + 1];
                }
                numberBooks--;
                printf("====== Supression effectuée avec succés ======");
            }
            break;

        case 6:

            printf("Le nombre total de livres dans la librairie est %d,\n", numberBooks);
            for (int i = 0; i < numberBooks; i++)
            {
                printf("La quantitée en stock de le livre %s est %d.\n", titleBook[i], quantityInStock[i]);
            }
            break;

        case 7:
            printf("==============A bientôt==============\n");
            break;

        default:
            printf("Saisir un nombre disponible dans le menu !!!\n");
            break;
        }

    } while (choice != 7);

    return 0;
}