#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[6][6], maior10 = 0, i, j, op;

    printf("Digite 1 para automatico e 2 para manual: ");
    scanf("%d", &op);

    if (op == 1){
        for (i = 0; i < 6; i++){
            for (j = 0; j < 6; j++){
                matriz[i][j] = rand() % 100;
            }
        }
    }else if (op == 2){
        for (i = 0; i < 6; i++){
            for (j = 0; j < 6; j++){
                printf("Digite o numero da linha %d e coluna %d: ", i+1, j+1);
                scanf("%d", &matriz[i][j]);
            }
        }
    }else{
        printf("Opção invalida\n");
        main();
    }

    printf("A matriz é: \n");
    for (i = 0; i < 6; i++){
        for (j = 0; j < 6; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Os numeros maiores que 10 são: ");
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            if(matriz[i][j] > 10){
                maior10++;
                printf("%d ", matriz[i][j]);
            }
        }
    }


}