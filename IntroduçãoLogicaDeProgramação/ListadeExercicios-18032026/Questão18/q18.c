/* Leia três números e calcule média,
produto e resto da soma por 2.
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    float n1, n2, n3, media, prod, resto;

    // Atribuição de variaveis
    printf("Digite o valor do primeiro numero:\n");
    scanf("%f", &n1);
    printf("Digite o valor do segundo numero:\n");
    scanf("%f", &n2);
    printf("Digite o valor do terceiro numero:\n");
    scanf("%f", &n3);

    // Operação
    media = (n1 + n2 + n3) / 3;
    prod = n1 * n2 * n3;
    resto = (int)(n1 + n2 + n3) % 2;

    // Impressão na tela. Está comentada porque não foi solicitada.
    // printf("Para numero 1 = %.2f | numero 2 = %.2f | numero 3 = %.2f temos:\nMedia = %.2f\nProduto = %.2f\nResto da Soma dividido por 2 = %.2f", n1, n2, n3, media, prod, resto);

    return 0;
}