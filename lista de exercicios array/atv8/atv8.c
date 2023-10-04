#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[5][5], maior = 0, sum = 0, i, j, l, op;

    printf("Digite 1 para aleatório e 2 para manual: ");
    scanf("%d", &op);

    if(op == 1){
        for (i = 0; i < 5; i++){
            for (j = 0; j < 5; j++){
                matriz[i][j] = rand() % 100;
            }
        }
    }else if (op == 2){
        for (i = 0; i < 5; i++){
            for (j = 0; j < 5; j++){
                printf("Digite o numero da linha %d e coluna %d: ", i+1, j+1);
                scanf("%d", &matriz[i][j]);
            }
        }
    }else{
        printf("Opção invalida\n");
        main();
    }

    j = 0;
    l = 4;
    for(i = 0;i < 5; i++){
        if(matriz[i][j] > maior){
            maior = matriz[i][j];
        }
        j++;
        sum += matriz[i][l];
        l--;
    }

    printf("A matriz é: \n");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("O maior numero da diagonal principal é %d\n", maior);
    printf("A soma da diagonal secundaria é %d\n", sum);

}