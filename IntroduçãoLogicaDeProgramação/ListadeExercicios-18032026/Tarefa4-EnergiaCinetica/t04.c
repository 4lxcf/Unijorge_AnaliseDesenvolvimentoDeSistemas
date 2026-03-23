/* Leia a massa e a velocidade de um corpo e calcule sua energia
cinética. */

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    double massa, velocidade, energiaCinetica;

    // Atribuição de variaveis
    printf("Digite a massa do corpo (em kg):\n");
    scanf("%lf", &massa);
    printf("Digite a velocidade do corpo (em m/s):\n");
    scanf("%lf", &velocidade);

    // Operação
    energiaCinetica = (massa * pow(velocidade, 2)) / 2;

    // Impressão na tela. Está comentado porque não foi solicitado na questão.
    // printf("Energia Cinetica: %.2lfJ", energiaCinetica);

    return 0;
}