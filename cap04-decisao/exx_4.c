#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float n1, n2, n3, n4, media, ne, media2;  

    printf("digite o valor de n1:\n"); 
    scanf("%f", &n1); 

    printf("digite o valor de n2:\n"); 
    scanf("%f", &n2); 

    printf("digite o valor de n3:\n"); 
    scanf("%f", &n3);
    
    printf("digite o valor de n4:\n"); 
    scanf("%f", &n4); 


    media = (n1 + n2 + n3 + n4) / 4; 

    if (media >= 7.0 )
    {
    printf("Aprovado(a)!.\n");
    }
    else
    {
    printf("Digite a nota do Exame extra:\n");
    scanf("%f", &ne);

    media2 = (ne + media) / 2; 
    
    if (media2 >= 5)
    {
    printf("Aprovado(a) em exame!.\n"); 
    }
    else
    {
    printf("Reprovado(a)!.\n"); 
    }
    printf("Media 2 final: %.1f\n", media2);
    }

    return 0;
}