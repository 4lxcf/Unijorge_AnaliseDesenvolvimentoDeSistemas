/* Leia a inicial do nome e a idade e exiba
ambos.
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    int idade;
    char letra;

    // Atribuição de variaveis
    printf("Pense em uma pessoa e digite a primeira letra do nome dela:\n");
    scanf("%c", &letra);
    printf("Digite a idade dessa pessoa:\n");
    scanf("%d", &idade);

    // Impressão na tela
    printf("O digitado foi:\nLetra: %c\nIdade: %d", letra, idade);

    return 0;
}