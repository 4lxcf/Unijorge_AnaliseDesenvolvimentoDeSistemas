/* Leia três notas e calcule média ponderada
(2, 3 e 5).
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração de variáveis
    double n1, n2, n3, mediaPond;

    // Atribuição de variaveis
    printf("Digite o valor da primeira nota:\n");
    scanf("%lf", &n1);
    printf("Digite o valor da segunda nota:\n");
    scanf("%lf", &n2);
    printf("Digite o valor da terceira nota:\n");
    scanf("%lf", &n3);

    // Operação
    mediaPond = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;

    // Impressão na tela. Está comentada porque não foi pedido.
    // printf("A MEDIA PONDERADA foi: %.1lf", mediaPond);

    return 0;
}
