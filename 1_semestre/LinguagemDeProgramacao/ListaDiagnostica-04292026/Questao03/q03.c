/*
Elabore um programa que leia três numero reais e determine qual deles é o maior. O programa deve exibir o maior valor com uma mensagem explicativa.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float n1, n2, n3, maior;

    printf("Digite um numero real:\n");
    scanf("%f", &n1);
    printf("Digite outro numero real:\n");
    scanf("%f", &n2);
    printf("Digite outro numero real:\n");
    scanf("%f", &n3);

    if (n1 == n2 && n2 == n3)
    {
        printf("Todos os numeros sao iguais, entao o maior numero eh: %.2f", n1);
    }
    else
    {
        if (n1 >= n2)
        {
            maior = n1;
        }
        else
        {
            maior = n2;
        }

        if (n3 >= maior)
        {
            maior = n3;
        }
    }

    if (maior == n1)
    {
        printf("O maior numero comparando todos foi o numero 1 com valor %.2f", maior);
    }
    else if (maior == n2)
    {
        printf("O maior numero comparando todos foi o numero 2 com valor %.2f", maior);
    }
    else if (maior == n3)
    {
        printf("O maior numero comparando todos foi o numero 3 com valor %.2f", maior);
    }

    return 0;
}
