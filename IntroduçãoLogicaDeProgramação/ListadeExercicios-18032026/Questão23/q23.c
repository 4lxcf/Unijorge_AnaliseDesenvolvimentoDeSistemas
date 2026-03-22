/* Leia duas letras e exiba ambas na mesma
linha.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    char c1, c2;

    // Atribuição de variaveis
    printf("Digite o primeiro caracter:\n");
    scanf("%c", &c1);
    printf("Digite o segundo caracter:\n");
    scanf(" %c", &c2); // Precisa ser adicionado este espaço antes do %c para funcionar corretamente.

    // Impressão na tela
    printf("%c | %c", c1, c2);

    return 0;
}