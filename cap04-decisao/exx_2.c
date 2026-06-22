#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int N; 

    printf("digite o valor de N aqui:\n"); 
    scanf("%d", &N); 

    if (N >= 0)
    {
    printf("o valor absoluto e: %d\n", N); 
    }
    else
    {
    printf("o valor absoluto e: %d\n", N * -1); 
    }
    
    return 0;
}