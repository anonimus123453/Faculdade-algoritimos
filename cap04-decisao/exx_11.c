#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int num; 

    printf("Digite o numero:\n");
    scanf("%d", &num); 

    if (!(num > 3))
    {
    printf("Dentro da faixa!"); 
    }
    

    return 0;
}