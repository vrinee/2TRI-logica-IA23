#include <stdio.h>
#include <stdlib.h>

int main(){

    float idade, peso, altura, idade50 = 0, alturaM = 0, nAlturaM = 0, peso40 = 0;

    for(int i = 0; i < 15; i++){
        printf("Digite a idade da pessoa %d: ", i+1);
        scanf("%f", &idade);
        printf("Digite o peso da pessoa %d: ", i+1);
        scanf("%f", &peso);
        printf("Digite a altura da pessoa %d: ", i+1);
        scanf("%f", &altura);

        if(idade > 50){
            idade50++;
        }

        if(idade>=10 && idade<=20){
            alturaM += altura;
            nAlturaM++;
        }

        if(peso < 40){
            peso40++;
        }
    }

    printf("Pessoas com mais de 50 anos: %.0f\n", idade50);
    printf("Media de altura das pessoas com idade entre 10 e 20 anos: %.2f\n", alturaM/nAlturaM);
    printf("A quantidade de pessoas com peso inferior a 40 quilos: %.0f\n", peso40);

    return 0;
}