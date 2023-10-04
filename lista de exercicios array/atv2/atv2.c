#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[40] , pares[40], ind = 0 , qntd = 0;
    for (int i = 0 ; i < 40; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0){
            pares[ind] = array[i];
            ind++;
            qntd++;
        }
    }

    printf("São %d numeros pares\n", qntd);
    printf("Os numeros pares são: \n");
    for (int i = 0; i < qntd; i++){
        printf("%d\n", pares[i]);
    }
}