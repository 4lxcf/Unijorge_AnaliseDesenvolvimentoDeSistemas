/* Escreva um programa para calcular a distância entre quaisquer
dois pontos (x1, y1) e (x2, y2) especificados pelo usuário.
Utilize boas práticas de programação.
Teste seu programa com os pontos (−3, 2) e (3, −6).
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    double x1, x2, y1, y2, dist;

    // Atribuição de variaveis
    printf("Digite o valor de X do ponto inicial (x1):\n");
    scanf("%lf", &x1);
    printf("Digite o valor de Y do ponto inicial (y1):\n");
    scanf("%lf", &y1);
    printf("Digite o valor de X do ponto final (x2):\n");
    scanf("%lf", &x2);
    printf("Digite o valor de Y do ponto final (y2):\n");
    scanf("%lf", &y2);

    // Operação
    dist = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

    // Impressão na tela
    printf("Ponto Inicial (x1, y1): (%.1lf, %.1lf)\n", x1, y1);
    printf("Ponto Final (x2, y2): (%.1lf, %.1lf)\n", x2, y2);
    printf("Distancia: %.1lf", dist);

    return 0;
}