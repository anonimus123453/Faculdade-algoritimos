#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int A, B, C, aux; 

    printf("Digite o valor de A:\n"); 
    scanf("%d", &A); 

    printf("Digite o valor de B:\n"); 
    scanf("%d", &B); 

    printf("Digite o valor de C:\n"); 
    scanf("%d", &C); 

    if (A > B)
    {
    aux = A; 
    A = B; 
    B = aux; 
    }
    if (A > C)
    {
    aux = A; 
    A = C; 
    C = aux; 
    }
    
    if (B > C)
    {
    aux = B; 
    B = C; 
    C = aux; 
    }

    printf("ordem crescente na tela: %d, %d, %d\n", A, B, C); 



    return 0;
}