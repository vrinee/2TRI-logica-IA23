#include <stdio.h>
#include <stdlib.h>

int main (){
    int running = 1,num = 0,i = 0, tamanho;
    printf("Quantos números vc quer?");
    scanf("%d", &tamanho);
    int pares[tamanho];
    
    while (running == 1){
        if(num%2 != 0){
            num++;
        }else{
        pares[i] = num;
        if(num%2 == 0 && i == tamanho - 1){
            running = 0;
        }
        num++;
        i++;
        }
    }

    printf("Os %d primeiros números pares são:",tamanho);
    for( i = 0; i < tamanho; i ++){
        printf("\n %d",pares[i]);
    }
    return 0;
}