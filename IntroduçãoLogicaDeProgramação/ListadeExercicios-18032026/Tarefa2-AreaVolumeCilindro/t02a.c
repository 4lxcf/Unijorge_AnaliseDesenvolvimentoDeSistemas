/* Leia o raio e a altura de um cilindro e calcule sua área total e
volume. */

#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    double raio, altura, area, volume;

    // Atribuição de variaveis
    printf("Digite o raio do cilindro:\n");
    scanf("%lf", &raio);
    printf("Digite a altura do cilindro:\n");
    scanf("%lf", &altura);

    // Operação
    area = (2 * M_PI * raio * altura) + (2 * M_PI * pow(raio, 2));
    volume = M_PI * pow(raio, 2) * altura;

    // Impressão na tela. Está comentado porque não foi solicitado na questão.
    // printf("Area do Cilindro: %.2lf unidades quadraticas | Volume do Cilindro: %.2lf unidades cubicas", area, volume);

    return 0;
}