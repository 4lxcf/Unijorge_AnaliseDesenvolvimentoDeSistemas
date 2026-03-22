/* Leia um caractere e um número inteiro.
Mostre o caractere e o dobro do número.
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    char carac;
    int n;

    // Atribuição de variaveis
    printf("Digite um caracter:\n");
    scanf("%c", &carac);
    printf("Digite numero inteiro:\n");
    scanf("%d", &n);

    // Impressão na tela
    printf("%c | %d", carac, n * 2);

    return 0;
}