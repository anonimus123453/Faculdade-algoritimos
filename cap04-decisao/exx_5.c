#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Essencial para pow() e sqrt()

int main() {
    
    // Adicionei as variáveis x1 e x2 para guardar as respostas
    float A, B, C, delta, x1, x2;  

    printf("Digite o valor de A aqui:\n");
    scanf("%f", &A); 

    printf("Digite o valor de B aqui:\n");
    scanf("%f", &B); 

    printf("Digite o valor de C aqui:\n");
    scanf("%f", &C); 

    // 1. Cálculo do Delta
    delta = pow(B, 2) - (4 * A * C); 

    // 2. Testando as condições do Delta
    if (delta < 0)
    {
        printf("Delta = %.1f. Nao ha solucao real!.\n", delta); 
    }
    else if (delta > 0)
    {
        printf("Delta = %.1f. Ha duas solucoes reais e diferentes:\n", delta); 
        
        // Fórmula de Bhaskara: (-B + ou - raiz de delta) / (2 * A)
        // Atenção aos parênteses para não errar a ordem da matemática!
        x1 = (-B + sqrt(delta)) / (2 * A);
        x2 = (-B - sqrt(delta)) / (2 * A);
        
        printf("X1 = %.2f\n", x1);
        printf("X2 = %.2f\n", x2);
    }
    else // Aqui o delta é EXATAMENTE igual a zero
    {
        printf("Delta = 0. Ha apenas uma solucao real:\n");
        
        // Se delta é 0, a raiz de delta é 0. Então a conta fica só -B / (2*A)
        x1 = -B / (2 * A);
        
        printf("X = %.2f\n", x1);
    }

    return 0;
}