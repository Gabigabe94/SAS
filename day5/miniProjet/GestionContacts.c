#include <stdio.h>

struct Contact
{

    char nom[30];
    char numTel[20];
    char adrEmail[100];
};

int main()
{

    int choix;
    do
    {

        printf("\n======= Système de Gestion de Contacts =======\n");
        printf("\n1. Ajouter un contact\n");
        printf("2. Modifier un contact\n");
        printf("3. Supprimer un contact\n");
        printf("4. Afficher tous les contacts\n");
        printf("5. Rechercher un contact\n");
        printf("6. Quitter \n");
        printf("\n=========== Saisissez votre choix  ============\n");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:

            break;

        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 6:
            printf ("A bientot !!!");
            break;

        default:
            break;
        }

    } while (choix != 6);
}