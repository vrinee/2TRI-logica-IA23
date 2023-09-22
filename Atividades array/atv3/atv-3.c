#include <stdio.h>
#include <stdlib.h>

int main() {
    int base[2][5],num = 1;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            base[i][j] = num;
            num++;
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("\n %d",base[i][j]);
        }
        
    }
    return 0 ;
}