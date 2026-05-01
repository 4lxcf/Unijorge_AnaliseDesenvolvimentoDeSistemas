/* Escreva um programa que calcule a frequência de ressonância de
um circuito, dados os valores de L e C.
Teste seu programa com: L = 0,25 mH e C = 0,10 nF
*/

#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    double indutancia, capacitancia, freq;

    // Atribuição de variaveis
    printf("Digite o valor da Indutancia (H):\n");
    scanf("%lf", &indutancia);
    printf("Digite o valor da Capacitancia (F):\n");
    scanf("%lf", &capacitancia);

    // Operação
    freq = 1 / (2 * M_PI * sqrt(indutancia * capacitancia));

    // Impressão na tela
    printf("Indutancia: %.2lf H\n", indutancia);
    printf("Capacitancia: %.2lf J\n", capacitancia);
    printf("Frequencia de Ressonancia: %.2lf MHz\n", freq / 1000000);

    return 0;
}