#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int num; 

    printf("DIgite o numero: ");
    scanf("%d", &num); 

    if (num % 2 == 0)
    {
    printf("O numero e par!"); 
    }
    
    else
    {
    printf("o numero e impar!"); 
    }
    


    return 0;
}