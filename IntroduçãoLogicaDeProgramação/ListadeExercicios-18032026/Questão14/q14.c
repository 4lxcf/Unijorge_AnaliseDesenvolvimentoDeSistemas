/* Leia dois números e calcule: soma,
diferença, produto e razão
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    double n1, n2, soma, dif, prod, razao;

    // Atribuição de variaveis
    printf("Digite o primeiro numero:\n");
    scanf("%lf", &n1);
    printf("Digite o segundo numero:\n");
    scanf("%lf", &n2);

    // Operação
    soma = n1 + n2;
    dif = n1 - n2;
    prod = n1 * n2;
    razao = n1 / n2;

    // Impressão na tela. Está comentada porque não foi solicitada.
    // printf("Com os numeros %.2lf e %.2lf temos:\nSoma = %.2f\nDiferenca = %.2f\nProduto = %.2f\nRazao = %.2f\n", n1, n2, soma, dif, prod, razao);

    return 0;
}
