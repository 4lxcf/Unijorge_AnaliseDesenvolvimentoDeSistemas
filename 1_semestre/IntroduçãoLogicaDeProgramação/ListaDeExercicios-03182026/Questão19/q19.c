/* Leia bases e altura e calcule área do
trapézio.
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    float baseMaior, baseMenor, altura, area;

    // Atribuição de variaveis
    printf("Digite o valor da BASE MAIOR numero:\n");
    scanf("%f", &baseMaior);
    printf("Digite o valor da BASE MENOR numero:\n");
    scanf("%f", &baseMenor);
    printf("Digite o valor da altura numero:\n");
    scanf("%f", &altura);

    // Operação
    area = ((baseMaior + baseMenor) * altura) / 2;

    // Impressão na tela. Está comentada porque não foi solicitada.
    // if (baseMenor > baseMaior)
    // {
    //     printf("Queria me trollar ne, danadinho?\nPara base MAIOR = %.2f | base MENOR = %.2f | altura = %.2f temos:\nArea do Trapezio = %.2f\nxD", baseMenor, baseMaior, altura, area);
    // }
    // else
    // {
    //     printf("Para base MAIOR = %.2f | base MENOR = %.2f | altura = %.2f temos:\nArea do Trapezio = %.2f", baseMaior, baseMenor, altura, area);
    // }

    return 0;
}