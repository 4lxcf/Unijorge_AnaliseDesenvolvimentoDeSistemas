#include <stdio.h>

int main()
{
    float vendas[12], maior = 0, menor = 0, media = 0;
    int size = sizeof(vendas) / sizeof(vendas[0]);

    for (int i = 0; i < size; i++)
    {
        // Preencher os valores do array manualmente
        printf("Digite o valor da venda %d: ", i + 1);
        scanf("%f", &vendas[i]);

        // Garantir que o menor valor possível seja o primeiro valor
        if (maior == 0 && menor == 0 && media == 0)
        {
            menor = vendas[0];
        }

        // Comparar e determinar o maior valor da lista
        if (vendas[i] >= maior)
        {
            maior = vendas[i];
        }

        // Comparar e determinar o menor valor da lista
        if (vendas[i] <= menor)
        {
            menor = vendas[i];
        }
    }

    // Calculo da média
    for (int i = 0; i < size; i++)
    {
        media = media + vendas[i];
    }

    media = media / size;

    printf("A maior venda foi: %.2f\n", maior);
    printf("A menor venda foi: %.2f\n", menor);
    printf("A media de vendas foi: %.2f\n", media);
}