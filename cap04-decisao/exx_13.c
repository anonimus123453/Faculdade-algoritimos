#include <stdio.h>
#include <stdlib.h>

int main() {
    

    int A, B, C, soma; 

    printf("Digite o valor de A:\n"); 
    scanf("%d", &A); 

    printf("Digite o valor de B:\n"); 
    scanf("%d", &B);

    printf("Digite o valor de C:\n"); 
    scanf("%d", &C);

    soma = A + B + C; 

    if (soma >= 100)
    {
    printf("Resultado: %d", soma); 
    }
    

    return 0;
}