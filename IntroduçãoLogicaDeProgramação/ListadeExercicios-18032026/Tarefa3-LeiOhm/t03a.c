/* Leia a resistência e a corrente elétrica e calcule a tensão no
circuito. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    double resistencia, corrente, tensao;

    // Atribuição de variaveis
    printf("Digite a resistencia do circuito:\n");
    scanf("%lf", &resistencia);
    printf("Digite a corrente do circuito:\n");
    scanf("%lf", &corrente);

    // Operação
    tensao = resistencia * corrente;

    // Impressão na tela. Está comentado porque não foi solicitado na questão.
    // printf("Tensao resultante: %.2lfV", tensao);

    return 0;
}