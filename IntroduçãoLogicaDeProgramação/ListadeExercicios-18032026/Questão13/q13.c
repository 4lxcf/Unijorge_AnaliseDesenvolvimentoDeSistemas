/* Leia distância e tempo e calcule
velocidade média.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    double dist, tempo, velMedia;

    // Atribuição de variaveis
    printf("Digite o valor da distancia percorrida em quilometros:\n");
    scanf("%lf", &dist);
    printf("Digite o valor do tempo utilizado em horas:\n");
    scanf("%lf", &tempo);

    // Operação
    velMedia = dist / tempo;

    // Impressão na tela. Está comentada porque não foi solicitada.
    // printf("Fazendo %.2lfkm em %.2lfh, a Velocidade Media = %.2lfkm/h", dist, tempo, velMedia);

    return 0;
}
