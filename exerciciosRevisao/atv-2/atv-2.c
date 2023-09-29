#include <stdio.h>
#include <stdlib.h>

int main(){

    float peso, altura, IMC;
    int  bxPeso = 0, pesoAdqd = 0, sobrePeso = 0, obsedidade1 = 0, obesidade2 = 0, obesidadeExt = 0;

    for(int i = 0; i < 20; i ++){
        printf("Digite o peso e altura da pessoa %d: ", i+1);
        scanf("%f %f", &peso, &altura);
        IMC = peso/(altura*altura);

        if(IMC < 0){
            printf("IMC invalido\n");
            i--;
        }
        else if(IMC < 18.5){
            bxPeso++;
            printf("Abaixo do peso\n");
        }
        else if(IMC < 25){
            pesoAdqd++;
            printf("Peso adequado\n");
        }
        else if(IMC < 30){
            sobrePeso++;
            printf("Sobrepeso\n");
        }
        else if(IMC < 35){
            obsedidade1++;
            printf("Obesidade grau 1\n");
        }
        else if(IMC < 40){
            obesidade2++;
            printf("Obesidade grau 2\n");
        }
        else{
            obesidadeExt++;
            printf("Obesidade grau extrema\n");
        }

        printf("IMC: %.2f\n", IMC);

    }
    printf("Abaixo do peso: %d\n", bxPeso);
    printf("Peso adequado: %d\n", pesoAdqd);
    printf("Sobrepeso: %d\n", sobrePeso);
    printf("Obesidade grau 1: %d\n", obsedidade1);
    printf("Obesidade grau 2: %d\n", obesidade2);
    printf("Obesidade grau extrema: %d\n", obesidadeExt);
}