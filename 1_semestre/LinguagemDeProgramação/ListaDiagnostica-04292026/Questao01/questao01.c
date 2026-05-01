/*
Desenvolva um programa em C que leia dois numeros inteiros informados pelo usuário. O programa deve calcular e exibir os resultados das quatro operações básicas:
soma, subtração, multiplicação e divisão. Considere o tratamento para divisão por zero.
*/

#include <stdio.h>

int main()
{
    int n1, n2, soma, sub, mult;
    float div;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &n1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &n2);

    soma = n1 + n2;
    sub = n1 - n2;
    mult = n1 * n2;
    if (n2 != 0)
    {
        div = (float)n1 / (float)n2;
    }

    printf("SOMA: %d\nSUBTRACAO: %d\nMULTIPLICACAO: %d\n", soma, sub, mult);
    if (n2 != 0)
    {
        printf("DIVISAO: %.2f\n", div);
    }
    else
    {
        printf("Impossivel dividir por 0.\n");
    }
}