/* Leia posição inicial, velocidade e tempo, e calcule a posição final. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    double posInicial, vel, posFinal;
    int tempo;

    // Atribuição de variaveis
    printf("Digite a posicao inicial:\n");
    scanf("%lf", &posInicial);
    printf("Digite a velocidade:\n");
    scanf("%lf", &vel);
    printf("Digite o tempo:\n");
    scanf("%d", &tempo);

    // Operação
    posFinal = posInicial + (vel * tempo);

    // Impressão na tela. Está comentado porque não foi solicitado na questão.
    // printf("Posicao Final: %.2lf", posFinal);

    return 0;
}