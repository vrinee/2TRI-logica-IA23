#include <stdio.h>
#include <stdlib.h>

int main(){
    char num[5];

    for(int i = 0; i < 5; i++){
        printf("Digite o %dº caractere: ", i+1);
        scanf("%s", &num[i]);
    }
    printf("O número é: %s\n", num);
    return 0;
}
