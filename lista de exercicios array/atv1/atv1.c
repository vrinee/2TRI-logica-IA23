#include <stdio.h>
#include <stdlib.h>


int main (){

    int array[16], first[8], second[8];

    for (int i = 0; i < 16; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 16; i++){
        if(i < 8){
            first[i] = array[i];
        }else{
            second[i - 8] = array[i];
        }
    }


    for (int i = 0; i < 16; i++){
        if(i < 8){
            array[i] = second[i];
        }else{
            array[i] = first[i - 8];
        }
    }

    for (int i = 0; i < 16; i++){
        printf("%d\n",array[i]);
    }

}