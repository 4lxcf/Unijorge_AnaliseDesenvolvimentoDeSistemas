/* Leia lado e calcule área e diagonal do
quadrado.
 */

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    double lado, area, diag;

    // Atribuição de variaveis
    printf("Digite o valor do lado do quadrado:\n");
    scanf("%lf", &lado);

    // Operação
    area = pow(lado, 2);
    diag = lado * pow(2, 1 / 2);

    // Impressão na tela. Está comentada porque não foi solicitada.
    // printf("Com um lado medindo %.2lf temos um quadrado com:\nArea = %.2lf\nDiagonal = %.2lf", lado, area, diag);

    return 0;
}