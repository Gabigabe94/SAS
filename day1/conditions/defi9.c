#include <stdio.h>

int main(){

    char caractere;
    printf("\nSaisi une caractére :\n");
    scanf("%c",&caractere);

    switch (caractere)
    {
    case 'a': case 'b': case 'c': case 'd': case 'e': case 'f': case 'j':
    case 'h': case 'i': case 'g': case 'k': case 'l': case 'm': case 'n':
    case 'o': case 'p': case 'q': case 'r': case 's': case 't': case 'u':
    case 'v': case 'w': case 'x': case 'y': case 'z':
        printf("Ce caractére fait partie des l'alphabet, l'alphabet est minuscule.\n");
        break;

    case 'A': case 'B': case 'C': case 'D': case 'E': case 'F': case 'J':
    case 'H': case 'I': case 'G': case 'K': case 'L': case 'M': case 'N':
    case 'O': case 'P': case 'Q': case 'R': case 'S': case 'T': case 'U':
    case 'V': case 'W': case 'X': case 'Y': case 'Z':
        printf("Ce caractére fait partie des l'alphabet, l'alphabet est majiscule.\n");
        break;
    default:
        printf("Ce caractére ne fait pas partie des l'alphabet.\n");
        break;
    }
}