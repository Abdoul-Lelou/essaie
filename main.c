#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int find_code(int inpCode){
    int tab[]= {152,147,222,881,236};
    bool finder = false;

        for(int j=0; j<5; j++){
            if(tab[j] == inpCode){
                finder = true;
            }
        }

        return finder;
}

//bonjour le monde
// last bonjour

int main()
{
    int i= 0, cpt=3, inpCode;

    printf("Veillez saisir le code: ");
    scanf("%d", &inpCode);

    while(i <= 3){
        if(find_code(inpCode)){
            printf("Vous avez reussie");
            return 0;
        }
            if(cpt){
                 printf("Il vous reste %d fois \n", cpt--);
                 printf("Veillez saisir encore code: \n");
                 scanf("%d", &inpCode);
            }else{
                 printf("Vous avez echoué");
                 return 0;
            }

        i++;
    }

    return 0;
}


