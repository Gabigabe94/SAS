#include <stdio.h>
#include <string.h>

#define MAXBOOKS 100
#define SIZETITLE 50
#define SIZEAUTHOR 30

char titleBook[MAXBOOKS][SIZETITLE];
char authorBook[MAXBOOKS][SIZEAUTHOR];
float priceBook[MAXBOOKS];
int quantityInStock[MAXBOOKS];
int numberBooks = 0;

int rechercher()
{

    char search[SIZETITLE];
    getchar();
    fgets(search, sizeof(search), stdin);
    search[strcspn(search, "\n")] = 0;
    for (int i = 0; i < numberBooks; i++)
    {
        if (strcmp(search, titleBook[i]) == 0)
        {
            return i;
        }
    }
    return -1;
}

void supprimerLivre(int index)
{
    for (int i = index; i < numberBooks - 1; i++)
    {
        strcpy(titleBook[i], titleBook[i + 1]);
        strcpy(authorBook[i], authorBook[i + 1]);
        priceBook[i] = priceBook[i + 1];
        quantityInStock[i] = quantityInStock[i + 1];
    }
    numberBooks--;
    printf("\n====== Supression effectuée avec succés ======\n");
}

void ajouter()
{
    if (numberBooks >= MAXBOOKS)
    {
        printf("\nLe stock est plein, impossible d'ajouter plus de livres.\n");
    }
    printf("Entrer le titre de livre :\n");
    getchar(); // vider buffer
    fgets(titleBook[numberBooks], SIZETITLE, stdin);
    titleBook[numberBooks][strcspn(titleBook[numberBooks], "\n")] = 0; // enlever le \n

    printf("Entrer l'auteur du livre :\n");
    fgets(authorBook[numberBooks], SIZEAUTHOR, stdin);
    authorBook[numberBooks][strcspn(authorBook[numberBooks], "\n")] = 0;

    printf("Entrer le prix du livre :\n");
    scanf("%f", &priceBook[numberBooks]);
    getchar(); //  vide le \n laissé par scanf

    printf("Entrer la quantitée en stock :\n");
    scanf("%d", &quantityInStock[numberBooks]);
    getchar(); //  encore vider le \n

    numberBooks++;
    printf("\nLivre ajouté avec succès !\n");
}

void afficher()
{
    if (numberBooks == 0)
    {
        printf("\nY a pas des livres dans la librairie !!\n");
    }
    else
    {
        printf("------- Liste de livres disponibles---------\n");
        for (int i = 0; i < numberBooks; i++)
        {
            printf("\nLivre numéro %d\n", i + 1);
            printf("Titre de livre : %s,\n", titleBook[i]);
            printf("Nom de l'auteur : %s,\n", authorBook[i]);
            printf("Le prix : %0.2f DH,\n", priceBook[i]);
            printf("Le nombre total de livres en stock : %d.\n", quantityInStock[i]);
        }
        printf("\n------- Liste de livres disponibles---------\n");
    }
}

void modifierQuantity(int index)
{
    int newQuantity;
    printf("Saisir la nouvelle quantitée :\n");
    scanf("%d", &newQuantity);

    quantityInStock[index] = newQuantity;
    printf("\n====== Modification effectuée avec succés ======\n");
}

void afficherParIndex(int index)
{
    printf("\n====== Détails de livre =========\n");
    printf("Titre de livre : %s,\n", titleBook[index]);
    printf("Nom de l'auteur : %s,\n", authorBook[index]);
    printf("Le prix : %0.2f,\n", priceBook[index]);
    printf("Le nombre total de livres en stoc : %d.\n", quantityInStock[index]);
}

int main()
{
    int choice = 0;

    do
    {
        printf("\n====== Système de Gestion de Stock dans une Librairie ======\n");
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

            ajouter();
            break;

        case 2:

            afficher();
            break;

        case 3:

            if (numberBooks == 0)
            {
                printf("\nY a pas des livres dans la libraire !!\n");
            }
            else
            {
                printf("\nEntrer le titre du livre à rechercher : \n");
                position = rechercher();
                if (position == -1)
                {
                    printf("\nLe livre n'existe pas !!\n");
                }
                else
                {
                    afficherParIndex(position);
                }
            }

            break;

        case 4:

            if (numberBooks == 0)
            {
                printf("\nY a pas des livres dans la libraire !!\n");
            }
            else
            {
                printf("\nEntrer le titre du livre à modifier : \n");
                position = rechercher();
                if (position == -1)
                {
                    printf("\nLe livre n'existe pas \n");
                }
                else
                {
                    modifierQuantity(position);
                }
            }

            break;

        case 5:

            if (numberBooks == 0)
            {
                printf("\nY a pas des livres dans la libraire !!\n");
            }
            else
            {
                printf("Entrer le titre du livre à supprimer : \n");
                position = rechercher();
                if (position == -1)
                {
                    printf("Le livre n'existe pas \n");
                }
                else
                {
                    supprimerLivre(position);
                }
            }

            break;

        case 6:

            printf("\nLe nombre total de livres dans la librairie est %d.\n", numberBooks);
            for (int i = 0; i < numberBooks; i++)
            {
                printf("La quantitée en stock de livre %s est %d.\n", titleBook[i], quantityInStock[i]);
            }
            break;

        case 7:
            printf("\n==============A bientôt==============\n");
            break;

        default:
            printf("\nChoix invalide !!!\n");
            break;
        }

    } while (choice != 7);

    return 0;
}