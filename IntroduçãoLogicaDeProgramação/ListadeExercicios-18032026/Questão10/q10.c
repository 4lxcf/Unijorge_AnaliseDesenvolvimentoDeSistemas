/* Leia segundos e converta para minutos e
horas. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    double sec, min, hours;

    // Atribuição de variaveis
    printf("Digite a quantidade de segundos:\n");
    scanf("%lf", &sec);

    // Operação
    min = sec / 60;
    hours = sec / 3600;

    // Impressão na tela. Está comentado porque não foi pedido na questão.
    // printf("%.1lfseg corresponde a:\n%.2lf em minutos;\n%.2lf em horas.", sec, min, hours);

    return 0;
}
