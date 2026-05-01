/* Leia dois números e calcule potência e
raiz (math.h).
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    double n1, n2, pot, raiz;

    // Atribuição de variaveis
    printf("Digite o valor do primeiro numero:\n");
    scanf("%lf", &n1);
    printf("Digite o valor do segundo numero:\n");
    scanf("%lf", &n2);

    // Operação
    pot = pow(n1, n2);
    raiz = pow(n1, 1 / n2);

    // Impressão na tela. Está comentado porque não foi solicitado na questão.
    printf("O numero %.1lf elevado a %.1lf = %.1lf.\nE a raiz de %.1lf a %.1lf de potencia = %.1lf", n1, n2, pot, n1, n2, raiz);

    return 0;
}
