#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float n1, n2, n3, n4, media; 

    printf("digite o valor de n1:\n"); 
    scanf("%f", &n1); 

    printf("digite o valor de n2:\n"); 
    scanf("%f", &n2); 

    printf("digite o valor de n3:\n"); 
    scanf("%f", &n3);
    
    printf("digite o valor de n4:\n"); 
    scanf("%f", &n4); 


    media = (n1 + n2 + n3 + n4) / 4; 

    if (media >= 5.0 )
    {
    printf("Aprovado(a)!.\n");
    }
    else
    {
    printf("Reprovado!.\n"); 
    }

    printf("Media final do aluno: %.1f\n", media); 
    return 0;
}