#include <stdio.h>

#define maxBooks 100
#define maxTitleLength 50
#define maxAuthorLenght 50

// void addBook(){
//     bool choice = 0;
//     do{
//         printf("Entrer le titre de livre \n");
//         //scanf("%[^\n]",titleBook[numberBook]);
//         getchar();
//     printf("Entrer le nom de l'auteur du livre \n");
//     scanf("%[^\n]",&authorBook[numberBook]);
//     printf("Entrer le prix de livre \n");
//     scanf("%f",&priceBook[numberBook]);
//     printf("Entrer la quantité \n");
//     scanf("%d",&quantityInStock[numberBook]);
//     numberBook++;
//     printf("-------L'addition effectuée avec succés.--------\n Tu veux ajouter un autre livre ");
// }while(choice !=0);

// }

int main()
{

    char titleBook[maxBooks][maxTitleLength];
    char authorBook[maxBooks][maxAuthorLenght];
    float priceBook[maxBooks];
    int quantityInStock[maxBooks];
    int numberBook = 0;
    int choice = 0;
    do

    {

        printf("----------------MENU--------------------------\n");
        printf("1-Ajouter un livre au stock.\n");
        printf("2-Afficher tous les livres disponibles.\n");
        printf("3-Rechercher un livre par son titre.\n");
        printf("4.Mettre à jour la quantité d'un livre.\n");
        printf("5.Supprimer un livre du stock.\n");
        printf("6-Afficher le nombre total de livres en stock.\n");
        printf("7-Exit!!\n");
        printf("-----------Saisir votre choix ---------------:\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            // addBook();
            printf("Entrer le titre de livre \n");
            getchar();
            fgets(titleBook[numberBook], sizeof(titleBook), stdin);
            printf("Entrer le nom de l'auteur du livre \n");
            getchar();
            fgets(authorBook[numberBook],sizeof(numberBook),stdin);
            printf("Entrer le prix de livre \n");
            scanf("%f", &priceBook[numberBook]);
            printf("Entrer la quantité \n");
            scanf("%d", &quantityInStock[numberBook]);
            numberBook++;
            break;

        case 2:

            printf("-------Liste des livres---------\n");

            for (int i = 0; i < numberBook; i++)
            {
                printf("titre de livre : %s , nom de l'auteur : %s , le prix : %f , le quantite : %d \n", titleBook[i], authorBook[i], priceBook[i], quantityInStock[i]);
            }

            printf("-------Liste des livres---------\n");

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
            printf("Saisir un nombre disponible dans le menu !!!\n");
            break;
        }

    } while (choice != 7);

    return 0;
}