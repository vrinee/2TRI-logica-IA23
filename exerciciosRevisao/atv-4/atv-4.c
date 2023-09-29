#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1 = 1, fat = 1;

    while(n1 != 0){
        printf("Digite um numero (0-Sair): ");
        scanf("%d", &n1);
        if(n1 == 0){
            break;
        }
        if(n1%2 == 0){
            for(int i = 1; i <= 10; i++){
                printf("%d x %d = %d\n", n1, i, n1*i);
            }
        }else{
            for(int i = n1; i > 0; i--){
                fat *= i;
            }
            printf("Fatorial de %d: %d\n", n1, fat);
        }
    }
    
}