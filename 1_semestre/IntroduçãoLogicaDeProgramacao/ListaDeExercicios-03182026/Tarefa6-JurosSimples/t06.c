/* Leia capital, taxa e tempo, e calcule o valor dos juros e o
montante final. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    double capital, taxa, jurosSimples, valorFinal;
    int tempo;

    // Atribuição de variaveis
    printf("Digite o valor do capital:\n");
    scanf("%lf", &capital);
    printf("Digite a taxa:\n");
    scanf("%lf", &taxa);
    printf("Digite o tempo:\n");
    scanf("%d", &tempo);

    // Operação
    jurosSimples = capital * taxa * tempo;
    valorFinal = capital + jurosSimples;

    // Impressão na tela. Está comentado porque não foi solicitado na questão.
    // printf("Capital: R$ %.2lf\nTaxa: %.2lf%% ao ano\nTempo: %d anos\nJuros: %.2lf\nValor Final: R$ %.2lf\n", capital, taxa, tempo, jurosSimples, valorFinal);

    return 0;
}