#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp = 0;

    printf("Temperatura do Sistema:\n");
    scanf("%d", &temp);

    if (temp >= 60)
    {
        printf("Temperatura *Normal*\n");
    }
    else if (temp > 60 && temp <= 80)
    {
        printf("Temperatura *Alerta\n*");
    }
    else if (temp > 80)
    {
        printf("Temperatura *Critica*\n");
    }
    else
    {
        printf("O valor da temperatura não pôde ser lido corretamente.");
    }

    system("pause");
}