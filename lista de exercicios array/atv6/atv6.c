#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[10][10], i, j, maior = 0, op, posX, posY;

    printf("Digite 1 para aleatório e 2 para manual: ");
    scanf("%d", &op);

    if(op == 1){
        for (i = 0; i < 10; i++){
            for (j = 0; j < 10; j++){
                matriz[i][j] = rand() % 1000;
            }
        }
    }else if (op == 2){
        for (i = 0; i < 10; i++){
            for (j = 0; j < 10; j++){
                printf("Digite o numero da linha %d e coluna %d: ", i+1, j+1);
                scanf("%d", &matriz[i][j]);
            }
        }
    }else{
        printf("Opção invalida\n");
        main();
    }

    for(i = 0;i < 10; i++){
        for(j = 0; j < 10; j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
                posY = i;
                posX = j;
            }
        }
    }

    printf("O maior numero é %d e está na coordenada (%d,%d)\n", maior, posY, posX);
}