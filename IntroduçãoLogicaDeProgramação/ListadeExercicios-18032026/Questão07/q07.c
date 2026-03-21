/* Leia dois números e calcule: divisão inteira,
resto e divisão real. */

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    // Declaracao de variáveis
    float n1, n2, divReal;
    int divInteira, resto;

    // Atribuição de variaveis
    printf("Digite o primeiro numero:\n");
    scanf("%f", &n1);
    printf("Digite o segundo numero:\n");
    scanf("%f", &n2);

    // Operação
    divInteira = (int)n1 / (int)n2;
    divReal = n1 / n2;
    resto = (int)n1 % (int)n2;

    // Impressão do resultado na tela. Está comentado porque não foi pedido na questão.
    printf("A divisao inteira desses valores: %d.\nA divisao real: %.2f.\nO resto da divisao: %d.", divInteira, divReal, resto);

    return 0;
}
