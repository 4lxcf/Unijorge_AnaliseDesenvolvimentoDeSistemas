/* Leia um caractere e um número real.
Mostre o valor e o caractere juntos na saída.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    char c;
    float n;

    // Atribuição de variaveis
    printf("Digite o caracter:\n");
    scanf("%c", &c);
    printf("Digite o numero:\n");
    scanf("%f", &n);

    // Impressão na tela
    printf("%.2f%c", n, c);

    return 0;
}