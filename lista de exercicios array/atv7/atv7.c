#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[4][4], op, i, j, line1[4], line2[4], line3[4], line4[4];

    printf("Digite 1 para automatico e 2 para manual: ");
    scanf("%d", &op);

    if (op == 1){
        for (i = 0; i < 4; i++){
            for (j = 0; j < 4; j++){
                matriz[i][j] = rand() % 100;
            }
        }
    }else if (op == 2){
        for (i = 0; i < 4; i++){
            for (j = 0; j < 4; j++){
                printf("Digite o numero da linha %d e coluna %d: ", i+1, j+1);
                scanf("%d", &matriz[i][j]);
            }
        }
    }else{
        printf("Opção invalida\n");
        main();
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(i == 0){
                line1[j] = matriz[j][i];
            }
            if(i == 1){
                line2[j] = matriz[j][i];
            }
            if(i == 2){
                line3[j] = matriz[j][i];
            }
            if(i == 3){
                line4[j] = matriz[j][i];
            }
        }
    }


    printf("A matriz é: \n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("A matriz trocada é: \n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            if(i == 0){
                printf("%d ", line4[j]);
            }
            if(i == 1){
                printf("%d ", line3[j]);
            }
            if(i == 2){
                printf("%d ", line2[j]);
            }
            if(i == 3){
                printf("%d ", line1[j]);
            }
        }
        printf("\n");
    }



}