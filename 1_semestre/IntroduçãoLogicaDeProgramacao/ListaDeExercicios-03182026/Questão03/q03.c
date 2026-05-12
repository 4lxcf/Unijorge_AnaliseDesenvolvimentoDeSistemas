/* Leia três números reais e calcule: soma,
média e produto. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração de variáveis
    float a, b, c, soma, media, produto;

    // Atribuição das variáveis
    printf("Digite o valor do primeiro numero real:\n");
    scanf("%f", &a);
    printf("Digite o valor do segundo numero real:\n");
    scanf("%f", &b);
    printf("Digite o valor do terceiro numero real:\n");
    scanf("%f", &c);

    // Operação
    soma = a + b + c;
    media = (a + b + c) / 3;
    produto = a * b * c;

    // Impressão do resultado na tela. Está comentado porque não foi pedido na questão.
    // printf("Soma: %.2f\nMedia: %.2f\nProduto: %.2f", soma, media, produto);

    return 0;
}
