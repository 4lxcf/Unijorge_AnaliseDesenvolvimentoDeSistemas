#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, fatorial = 1;

    printf("Digite um numero inteiro:\n");
    scanf("%i", &n);

    for (int i = n; i > 0; i--)
    {
        fatorial = fatorial * i;
    }

    printf("%i", fatorial);

    return 0;
}
