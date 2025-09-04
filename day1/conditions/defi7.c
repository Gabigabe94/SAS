#include<stdio.h>

int main(){
    char alphabet;
    printf("donner un alphabet :\n");
    scanf("%c",&alphabet);
    if((alphabet <=90) && (alphabet>=65)){
        printf("C'est un alphabet majuscule");
    }else{
        printf("C'est un alphabet minuscule");
    }
    return 0;
}