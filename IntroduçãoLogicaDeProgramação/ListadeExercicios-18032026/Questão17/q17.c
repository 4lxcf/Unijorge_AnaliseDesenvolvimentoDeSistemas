/* Leia valor em reais e converta para dólar
e euro.
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    float real, dolar, euro;

    // Atribuição de variaveis
    printf("Digite o valor em Real(R$):\n");
    scanf("%f", &real);

    // Operação
    dolar = real * 5.31;
    euro = real * 6.06;

    // Impressão na tela. Está comentada porque não foi solicitada.
    // printf("Um valor de R$ %.2f reais na data 22/mar/2026 equivale a:\nDolar(USD) = %.2f \nEuro(EUR) = %.2f ", real, dolar, euro);

    return 0;
}