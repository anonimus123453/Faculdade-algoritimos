#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int num;

    printf("Digite um numero de 1 ate 9: ");
    scanf("%d", &num); 


    if (num <= 9 && num > 0)
    {
    printf("O valor esta na faixa permitida!");
    }
    else
    {
    printf("O valor esta fora da faixa permitida!"); 
    }
    

    return 0;
}