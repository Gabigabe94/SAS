#include <stdio.h>

int main()
{

    char caractere;
    printf("\nSaisi un caractére :\n");
    scanf("%c", &caractere);

    switch (caractere)
    {

    case 'a':
    case 'e':
    case 'y':
    case 'i':
    case 'o':
    case 'u':
        printf("Ce caractére est une voyelle.\n");
        break;

    default:
        printf("Ce caractére n'est pas une voyelle.\n");
        break;
    }
}