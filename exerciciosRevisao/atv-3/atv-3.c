#include <stdio.h>
#include <stdlib.h>


int main(){
    int cod;
    float valor, valorTotal = 0, valorVista = 0, valorPrazo = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite o valor do Produto %d: ", i+1);
        scanf("%f", &valor);
        printf("Digite o codigo do Produto %d: ", i+1);
        scanf("%d", &cod);

        if(cod == 1){
            valorTotal += valor;
            valorVista += valor;
        }else if(cod == 2){
            valorTotal += valor;
            valorPrazo += valor + (valor*0.1);
        }else{
            printf("Codigo invalido. Tente novamente\n");
            i--;
        }
    }

    printf("Valor total: %.2f\n", valorTotal);
    printf("Valor a vista: %.2f\n", valorVista);
    printf("Valor a prazo: %.2f\n", valorPrazo);
}