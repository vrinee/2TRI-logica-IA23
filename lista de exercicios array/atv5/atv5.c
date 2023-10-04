#include <stdio.h>
#include <stdlib.h>

int main(){
    char lista[5][20];
    int i;

    for (i = 0; i < 5; i++){
        printf("Digite o %d nome: ", i+1);
        scanf("%s", lista[i]);
    }

    printf("Os nomes digitados foram: \n");
    for (i = 0; i < 5; i++){
        printf("%s\n", lista[i]);
    }

    printf("Os nomes digitados ao contrario foram: \n");
    for (i = 4 ; i >= 0; i--){
        printf("%s\n", lista[i]);
    }
}