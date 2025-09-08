#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

struct contact
{

    char nom[30];
    char numTel[20];
    char adrEmail[100];
};

struct contact carnetContacts[MAX_CONTACTS];
int nContacts = 0;

void ajouterContact()
{
    if (nContacts == MAX_CONTACTS)
    {
        printf("Le tableau est plein !!\n");
    }
    else
    {
        printf("\nSaisissez les informations suivantes pour chaque contact :\n");
        printf("Entrer le nom du contact :\n");
        // getchar();
        fgets(carnetContacts[nContacts].nom, 30, stdin);
        // carnetContacts[nContacts].nom[strcspn(carnetContacts[nContacts].nom,"\n")] = 0;

        printf("Entrer le numéro du contact :\n");
        fgets(carnetContacts[nContacts].numTel, 20, stdin);

        printf("Entrer l'adresse e-mail du contact :\n");
        fgets(carnetContacts[nContacts].adrEmail, 100, stdin);

        nContacts++;
        printf("\nContact ajouter avec succés\n ");
    }
}

void afficherListeContacts()
{

    for (int i = 0; i < nContacts; i++)
    {
        printf("\n-----Contact %d -----\nNom : %sNuméro de téléphone : %sL'adresse e-mail du contact : %s", i + 1, carnetContacts[i].nom, carnetContacts[i].numTel, carnetContacts[i].adrEmail);
    }
}

int rechercheContact()
{

    char nom[30];
    printf("Entrer le nom à rechercher \n");
    // getchar();
    fgets(nom, 30, stdin);

    for (int i = 0; i < nContacts; i++)
    {
        if (strcmp(nom, carnetContacts[i].nom) == 0)
        {
            return i;
        }
    }
    return -1;
}

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
        getchar();

        switch (choix)
        {
            int pos;
        case 1:
            ajouterContact();
            break;

        case 2:
            pos = rechercheContact();
            if (pos == -1)
            {
                printf("Contact n'existe pas !!");
            }
            else
            {
                char nouvelleAdrEmail[100];
                char nouveauNum[20];

                printf("Entrer la nouvelle adresse e-mail \n");
                fgets(nouvelleAdrEmail, 100, stdin);

                printf("Entrer le nouveau numéro \n");
                fgets(nouveauNum, 20, stdin);

                strcpy(carnetContacts[pos].adrEmail, nouvelleAdrEmail);
                strcpy(carnetContacts[pos].numTel, nouveauNum);

                printf("Modification éffectuée avec succés \n");
            }
            break;
        case 3:
            pos = rechercheContact();
            if (pos == -1)
            {
                printf("Contact n'existe pas !!");
            }
            else
            {
                for (int i = pos; i < nContacts - 1; i++)
                {
                    carnetContacts[i] = carnetContacts[i + 1];
                }
                nContacts--;
                printf("Suppression éffectuée avec succés \n");
            }
            break;
        case 4:
            if (nContacts == 0)
                printf("Y a pas de contacts sur le carnet \n");
            afficherListeContacts();
            break;
        case 5:

            pos = rechercheContact();
            if (pos == -1)
            {
                printf("Contact n'existe pas !!");
            }
            else
            {
                printf("------- Détails contact -------\n");
                printf("\n-----Contact %d -----\nNom : %sNuméro de téléphone : %sL'adresse e-mail du contact : %s", pos + 1, carnetContacts[pos].nom, carnetContacts[pos].numTel, carnetContacts[pos].adrEmail);
            }
            break;
        case 6:
            printf("A bientot !!!");
            break;

        default:
            printf("Entrer un numéro valide !!\n");
            break;
        }

    } while (choix != 6);
}