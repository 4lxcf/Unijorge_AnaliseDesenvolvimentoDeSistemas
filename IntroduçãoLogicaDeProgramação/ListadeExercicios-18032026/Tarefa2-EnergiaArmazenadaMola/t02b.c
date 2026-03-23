/* Escreva um programa para calcular a compressão da mola e a
energia potencial armazenada, dados k e F.
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    double constanteMola, forca, compressaoMola, energiaPot;

    // Atribuição de variaveis
    printf("Digite o valor da constante da Mola (N/m):\n");
    scanf("%lf", &constanteMola);
    printf("Digite o valor da Forca (N):\n");
    scanf("%lf", &forca);

    // Operação
    compressaoMola = forca / constanteMola;
    energiaPot = constanteMola * pow(compressaoMola, 2) / 2;

    // Impressão na tela. Está comentado porque não foi solicitado.
    // printf("Compressao da Mola: %.2lf m\n", compressaoMola);
    // printf("Energia Potencial Armazenada: %.2lf J\n", energiaPot);

    return 0;
}