/* Leia base e altura e calcule área e
perímetro do retângulo. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração das variáveis
    float base, altura, area, perimetro;

    // Atribuição de variaveis
    printf("Digite o valor da Base do Retangulo:\n");
    scanf("%f", &base);
    printf("Digite o valor da Altura do Retangulo:\n");
    scanf("%f", &altura);

    // Operação
    area = base * altura;
    perimetro = (base * 2) + (altura * 2);

    // Impressão do resultado na tela. Está comentado porque não foi solicitado na questão.
    // printf("A AREA desse retangulo vale: %.2f\nE o PERIMETRO vale: %.2f", area, perimetro);

    return 0;
}
