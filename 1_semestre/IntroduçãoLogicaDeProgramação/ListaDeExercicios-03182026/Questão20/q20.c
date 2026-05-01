/* Leia massa e altura e calcule o IMC (2
casas decimais).
 */

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    float massa, altura, imc;

    // Atribuição de variaveis
    printf("Digite o valor da massa numero:\n");
    scanf("%f", &massa);
    printf("Digite o valor da altura numero:\n");
    scanf("%f", &altura);

    // Operação
    imc = massa / pow(altura, 2);

    // Impressão na tela. Está comentada porque não foi solicitada.
    // printf("Para uma massa de %.2fkg e uma altura de %.2fcm\nO IMC = %.2f", massa, altura, imc);

    return 0;
}