#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, opc, p1, p2;

    printf("Menu de opcoes:\n");
    printf("1 - media aritmetica\n");
    printf("2 - media ponderada\n");
    printf("3 - sair\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opc);
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    if (opc == 1){
        printf("Media aritmetica: %d\n", (n1+n2)/2);
    }else if(opc == 2){
        printf("Peso do primeiro numero: ");
        scanf("%d", &p1);
        printf("Peso do segundo numero: ");
        scanf("%d", &p2);
        printf("Media ponderada: %d\n", (n1*p1+n2*p2)/(p1+p2));
    }else if(opc == 3){
        printf("Saindo...\n");
        return 0;
    }else {
        printf("Opcao invalida!\n");
    }
}