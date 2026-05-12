/* Leia um inteiro e calcule: quadrado, cubo e
resto por 3. */

#include <stdio.h>
#include <math.h> // Necessário para utilizar função pow()

int main(int argc, char const *argv[])
{
    // Declaração de variáveis
    int n, quadrado, cubo, restoPor3;

    // Atribuição de variáveis
    printf("Digite um numero inteiro:\n");
    scanf("%d", &n);

    // Operação
    quadrado = pow(n, 2);
    cubo = pow(n, 3);
    restoPor3 = n % 3;

    // Impressão de resultado na tela. Está comentado porque não foi pedido na questão.
    printf("O valor digitado ao quadrado: %d\nO valor digitado ao cubo: %d\nE o resto da divisao do numero por 3: %d", quadrado, cubo, restoPor3);

    return 0;
}
