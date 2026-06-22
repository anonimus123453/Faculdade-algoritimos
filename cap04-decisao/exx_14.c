#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int num, multi;

    printf("Digite o numero:\n");
    scanf("%d", &num);

    multi = num * 2; 

    if (multi > 30)
    {
    printf("%d", multi); 
    }
    

    return 0;
}