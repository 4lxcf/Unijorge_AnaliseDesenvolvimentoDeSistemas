/* Leia o raio e calcule área e circunferência
do círculo. */

#include <stdio.h>
#define _USE_MATH_DEFINES // Necessário para usar o valor de PI diretamente da biblioteca MATH
#include <math.h>         // Necessário para utilizar pow() e o valor de PI

int main(int argc, char const *argv[])
{
    // Declaração de variáveis
    double raio, area, circun;

    // Atribuição de variáveis
    printf("Digite o valor do raio:\n");
    scanf("%lf", &raio);

    // Operação
    area = M_PI * pow(raio, 2);
    circun = 2 * M_PI * raio;

    // Impressão do resultado. Está comentado porque não foi pedido na questão para mostrar
    // printf("Com %.2lf de raio, o circulo formado vai ter AREA = %.2lf e CIRCUNFERENCIA = %.2lf", raio, area, circun);

    return 0;
}
