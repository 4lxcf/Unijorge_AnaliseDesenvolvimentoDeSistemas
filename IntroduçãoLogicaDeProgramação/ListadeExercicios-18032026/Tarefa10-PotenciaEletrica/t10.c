/* Leia tensão e corrente e calcule a potência. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    double tensao, corrente, pot;

    // Atribuição de variaveis
    printf("Digite a tensao (V):\n");
    scanf("%lf", &tensao);
    printf("Digite o corrente (A):\n");
    scanf("%lf", &corrente);

    // Operação
    pot = tensao * corrente;

    // Impressão na tela. Está comentado porque não foi solicitado na questão.
    // printf("Potencia: %.2lf W", pot);

    return 0;
}