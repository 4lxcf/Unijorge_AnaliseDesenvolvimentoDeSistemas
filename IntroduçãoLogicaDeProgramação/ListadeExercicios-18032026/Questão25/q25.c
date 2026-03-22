/* Leia a inicial do nome e três notas.
Calcule a média e exiba junto com a inicial.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    char c;
    float n1, n2, n3, media;

    // Atribuição de variaveis
    printf("Digite a inicial do nome:\n");
    scanf("%c", &c);
    printf("Digite a primeira nota:\n");
    scanf("%f", &n1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &n2);
    printf("Digite a terceira nota:\n");
    scanf("%f", &n3);

    // Operação
    media = (n1 + n2 + n3) / 3;

    // Impressão na tela
    printf("%c | %.2f", c, media);

    return 0;
}