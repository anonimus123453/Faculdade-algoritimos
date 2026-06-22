#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int A, B;

    printf("digite o valor de A.\n"); 
    scanf("%d", &A); 

    printf("digite o valor de B.\n"); 
    scanf("%d", &B); 

    if (A > B)
    {
    printf("a diferenca do maior pelo menor é: %d\n", A - B); 
    }
    else
    {
    printf("a diferenca do maior pelo menor é: %d\n", B - A); 
    }
    


    return 0;
}