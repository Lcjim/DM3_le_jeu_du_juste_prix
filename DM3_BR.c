#include <stdio.h>
#include <stdlib.h>
int random_number(){
    int generated_num = (rand() % 1000) + 1;
    return generated_num;
}

int main() {
    int GuestNum;
    int AleatoirwNum;
    while (GuestNum != random_number()) {
        printf("vous allez devinez le prix!du jeu juste prix,le prix est compris entre 0 et 1000.\n");
        printf("utilisateur de deviner le prix aléatoire du :\n ");
        scanf("%d",&GuestNum);
        getchar();
        if (GuestNum<AleatoirwNum){
            printf("C'est plus!");
        }else if (GuestNum>AleatoirwNum){
            printf("C'est moins!");
        }else{
            printf("Bravo, vous avez trouvé le juste prix\n");
        }
    }
    return 0;
}

