#include <stdio.h>
#include <stdlib.h>

int main(){

    char respostas[20][10], gabarito[10];
    int acertos[20], i, j;

    for(i = 0; i < 20; i++){
        printf("\n\nDigite as respostas do %dº aluno:", i + 1);
        for(j = 0; j < 10; j++){
            printf("\nDigite a %dº resposta: ", j + 1);
            scanf("%s", &respostas[i][j]);
        }
    }

    printf("\n\nDigite o gabarito: ");
    for(i = 0; i < 10; i++){
        printf("\nDigite a %dº resposta: ", i + 1);
        scanf("%s", &gabarito[i]);
    }

    for(i = 0; i < 20; i++){
        acertos[i] = 0;
        for(j = 0; j < 10; j++){
            if(respostas[i][j] == gabarito[j]){
                acertos[i]++;
            }
        }
    }

    for(i = 0; i < 20; i++){
        printf("\n\nO aluno %d acertou %d \n", i + 1, acertos[i]);
    }

}