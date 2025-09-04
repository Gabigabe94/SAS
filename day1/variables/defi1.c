#include <stdio.h>

int main(){

    char n[20],p[20],s[10],adr[30];
    int age;

    printf("Entrer votre nom : ");
    scanf("%s",n);
    printf("Entrer votre prenom : ");
    scanf("%s",p);
    printf("Entrer votre adresse : ");
    scanf("%s",adr);
    printf("Entrer votre age : ");
    scanf("%d",&age);
    printf("Entrer votre sexe : ");
    scanf("%s",s);

    printf("Vos informations personnelles \n Votre nom : %s\n Votre prenonm : %s\n Votre sexe : %s\n votre email : %s\n Votre age : %d",n,p,s,adr,age);
    return 0;
}