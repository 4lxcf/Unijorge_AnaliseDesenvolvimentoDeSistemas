#include <stdio.h>

int main(int argc, char const *argv[])
{
    float salarioBase, salarioFinal;
    int tempo;

    printf("Qual o Salario Base?\n");
    scanf("%f", &salarioBase);

    printf("Qual o Tempo de Empresa?\n");
    scanf("%i", &tempo);

    if (tempo <= 3)
    {
        salarioFinal = salarioBase + salarioBase * 0.05;
    }
    else if (tempo > 3 && tempo <= 10)
    {
        salarioFinal = salarioBase + salarioBase * 0.1;
    }
    else if (tempo > 10)
    {
        salarioFinal = salarioBase + salarioBase * 0.15;
    }
    else
    {
        salarioFinal = -1;
    }

    if (salarioFinal != -1)
    {
        printf("Salario Final: %.2f", salarioFinal);
    }
    else
    {
        printf("Algo deu errado.");
    }

    return 0;
}
