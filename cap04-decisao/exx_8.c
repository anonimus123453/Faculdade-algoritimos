#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B, C, D, E; 
    int maior, menor; // As duas variáveis mágicas

    // ... (Seus scanfs perfeitos de A, B, C, D, E vêm aqui) ...
    printf("Digite o valor de A, B, C, D e E: ");
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

    // Passo 1: O 'A' começa sendo o maior e o menor de todos
    maior = A;
    menor = A;

    // Passo 2: Testando o B contra os atuais campeões
    if (B > maior) { maior = B; }
    if (B < menor) { menor = B; }

    // Passo 3: Testando o C
    if (C > maior) { maior = C; }
    if (C < menor) { menor = C; }

    // Passo 4: Testando o D
    if (D > maior) { maior = D; }
    if (D < menor) { menor = D; }

    // Passo 5: Testando o E
    if (E > maior) { maior = E; }
    if (E < menor) { menor = E; }

    // Mostra o resultado final sem complicação
    printf("\nMaior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    return 0;
}