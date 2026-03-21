/* Inclua bibliotecas e comentário. Leia dois
números inteiros e calcule: soma, produto e média. Exiba os
resultados. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    int a, b, soma, produto, media;

    // Solicitação dos números
    printf("Digite o primeiro valor:\n");
    scanf("%d", &a);

    printf("Digite o segundo valor:\n");
    scanf("%d", &b);

    // Operações
    soma = a + b;
    produto = a * b;
    media = (a + b) / 2;

    // Impressão na tela dos resultados
    printf("Resultado da SOMA dos valores: %d\n", soma);
    printf("Resultado do PRODUTO dos valores: %d\n", produto);
    printf("Resultado da MEDIA dos valores: %d\n", media);

    return 0;
}
