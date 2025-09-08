#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
    
    char chaine[50];
    printf("\nSaisissez votre chaine :\n");
    fgets(chaine, sizeof(chaine), stdin);

    chaine[strcspn(chaine, "\n")] = 0;

    bool palind = true;
    int taille = strlen(chaine);
    for ( int i=0; i< taille/2; i++ ){
        if(tolower(chaine[i]) != tolower(chaine[taille - i - 1])){
            palind = false;
            break;
        }
    }

    if(palind)
        printf("YES\n");
    else 
         printf("NO\n"); 
         
    return 0;     
}