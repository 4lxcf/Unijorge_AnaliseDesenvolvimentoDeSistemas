/* Leia massa e volume e calcule a densidade. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    double massa, volume, densidade;

    // Atribuição de variaveis
    printf("Digite a massa do corpo (kg):\n");
    scanf("%lf", &massa);
    printf("Digite o volume (m3):\n");
    scanf("%lf", &volume);

    // Operação
    densidade = massa / volume;

    // Impressão na tela. Está comentado porque não foi solicitado na questão.
    // printf("Densidade: %.2lf kg/m3", densidade);

    return 0;
}