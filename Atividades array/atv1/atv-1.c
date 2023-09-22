#include <stdio.h>
#include <stdlib.h>

int main(){
    int soma[10],pos,pos2,sum;

    printf("Digite qual posiçao você quer insirir:");
    scanf("%d",&pos);
    printf("Digite o número:");
    scanf("%d",&soma[pos]);
    printf("Digite qual posiçao você quer insirir:");
    scanf("%d",&pos2);
    printf("Digite o número:");
    scanf("%d",&soma[pos2]);

    sum = soma[pos] + soma[pos2];
    printf("A soma é %d",sum);    
    
}