/* Leia a força aplicada e a área e calcule a pressão. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    double forca, area, pressao;

    // Atribuição de variaveis
    printf("Digite a forca aplicada (N):\n");
    scanf("%lf", &forca);
    printf("Digite a area (m2):\n");
    scanf("%lf", &area);

    // Operação
    pressao = forca / area;

    // Impressão na tela. Está comentado porque não foi solicitado na questão.
    // printf("Pressao: %.2lf Pa", pressao);

    return 0;
}