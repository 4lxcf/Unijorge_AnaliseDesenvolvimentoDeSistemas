#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, soma = 0;

    printf("Digite um numero inteiro:\n");
    scanf("%i", &n);

    for (int i = 0; i <= n; i++)
    {
        soma = soma + i;
    }

    printf("%i", soma);

    return 0;
}
