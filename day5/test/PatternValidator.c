#include <stdio.h>

int main(){

    int n, i = 1, j = i+1, msgPatValid = 0;
    printf("\nDonner le nombre d'élément :\n");
    scanf("%d",&n);

    int tab[n];
    printf("Remplissage\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&tab[i]);
    }

    int mod = tab[0] % 2 ;
    int modTaille = n % 2;

    

    if(mod == 0){
        if(modTaille == 0){
            do{
                if((tab[i] % 2 != 0) && (tab[j] % 2 == 0) && (tab[n-1] != 0)){
                    msgPatValid = 1;
                    i = i+2;
                    //j++;
                }else{
                    break;
                }
            }while(i < n-1);
        }else{
            do{
                if((tab[i] % 2 != 0) && (tab[j] % 2 == 0) && (tab[n-1] == 0)){
                    msgPatValid = 1;
                    i = i+2;
                    //j++;
                }else{
                    break;
                }
            }while(i < n-1);
        }
    }else{
            
        if(modTaille == 0){
            do{
                if((tab[i] % 2 == 0) && (tab[j] % 2 != 0) && (tab[n-1] == 0)){
                    msgPatValid = 1;
                    i = i+2;
                    //j++;
                }else{
                    break;
                }
            }while(i < n-1);
        }else
        {
            do{
                if((tab[i] % 2 == 0) && (tab[j] % 2 != 0) && (tab[n-1] != 0)){
                    msgPatValid = 1;
                    i = i+2;
                    //j++;
                }else{
                    break;
                }
            }while(i < n-1);
        }
    }

    if(msgPatValid == 0){
        printf(" Pattern Invalid !!\n");
    }else{
        printf(" Pattern Valid !!\n");
    }
    
    return 0;

}