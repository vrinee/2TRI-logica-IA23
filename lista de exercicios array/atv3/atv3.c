#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1[10], num2[10], num3[20], i, j = 0, l = 0;


    printf("Digite os 10 numeros do primeiro array: \n");
    for (i = 0; i < 10; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &num1[i]);
    }

    printf("Digite os 10 numeros do segundo array: \n");
    for (i = 0; i < 10; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &num2[i]);
    }


    for (i = 0; i < 20; i ++){
        if(i % 2 == 0){
            num3[i] = num1[j];
            j++;
        }else{
            num3[i] = num2[l];
            l++;
        }
    }

    printf("O array resultante é: \n");
    for (i = 0; i < 20; i++){
        printf("%d\n", num3[i]);
    }
}