#include <stdio.h>

int main (){
    /*Écrivez un programme C qui demande un nombre entier n
    à l'utilisateur et calcule la somme des npremiers nombres naturels. 
    Par exemple, pour n= 4, la somme est 1 + 2 + 3 + 4 = 10.*/
    int n,s=0;
    printf("donner un nombre entier : ");
    scanf("%d",&n);
    for(int i=1;i<=n; i++){
        s=s+i;
    }
    printf("%d",s);
    return 0;
}