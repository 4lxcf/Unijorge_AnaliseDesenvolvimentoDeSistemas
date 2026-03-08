#include <stdio.h>

int main(int argc, char const *argv[])
{
    float valorCompra, valorFinal, desconto;

    printf("Qual o valor da compra?\n");
    scanf("%f", &valorCompra);

    if (valorCompra <= 100)
    {
        valorFinal = valorCompra;
    }
    else if (valorCompra > 100 && valorCompra <= 500)
    {
        valorFinal = valorCompra - valorCompra * 0.1;
    }
    else if (valorCompra > 500)
    {
        valorFinal = valorCompra - valorCompra * 0.15;
    }
    else
    {
        valorFinal = -1;
    }

    if (valorFinal >= 0)
    {
        printf("O valor final apos os descontos: %.2f", valorFinal);
    }
    else
    {
        printf("Algo deu errado na transação.");
    }

    return 0;
}
