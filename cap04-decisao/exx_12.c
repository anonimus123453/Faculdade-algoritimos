#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char nome[50]; 
    char sexo; // Mudamos para guardar apenas UMA letra

    printf("Escreva seu nome (apenas o primeiro nome): \n");
    // %s lê texto completo (strings)
    scanf("%s", nome); 

    printf("Qual seu sexo? (M/F):\n");
    // O espacinho antes do %c serve para o C não dar erro com o "Enter" anterior
    scanf(" %c", &sexo); 

    // Aqui entra a estrutura de 'if' e 'else' que vimos ali em cima
    if (sexo != 'M' && sexo != 'F') 
    {
        printf("Sexo informado inválido\n");
    }
    else if (sexo == 'M') 
    {
        printf("Ilmo. Sr. %s\n", nome);
    }
    else 
    {
        printf("Ilma. Sra. %s\n", nome);
    }

    return 0;
}