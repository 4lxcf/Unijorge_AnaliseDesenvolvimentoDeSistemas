/* Leia salário e aplique aumento de 10% e
desconto de 5%. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração de variáveis
    float salarioInicial, salarioFinal;

    // Atribuição de variáveis
    printf("Digite o valor do salario:\n");
    scanf("%f", &salarioInicial);

    // Operação
    salarioFinal = salarioInicial + (salarioInicial * 0.1);
    salarioFinal = salarioFinal - (salarioFinal * 0.05);

    // Impressão do valor na tela. Está comentado porque não foi pedido.
    printf("O valor final do salario foi: %.2f", salarioFinal);

    return 0;
}
