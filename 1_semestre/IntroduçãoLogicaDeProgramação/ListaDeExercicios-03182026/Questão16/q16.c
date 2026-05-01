/* Leia Celsius e converta para Fahrenheit e
Kelvin.
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    float celsius, fahren, kelvin;

    // Atribuição de variaveis
    printf("Digite o valor da temperatura em Celsius:\n");
    scanf("%f", &celsius);

    // Operação
    fahren = (celsius * 1.8) + 32;
    kelvin = celsius + 273.15;

    // Impressão na tela. Está comentada porque não foi solicitada.
    // printf("Um valor %.2f C equivale a:\nEscala Fahrenheit = %.2f F\nEscala Kelvin = %.2f K", celsius, fahren, kelvin);

    return 0;
}