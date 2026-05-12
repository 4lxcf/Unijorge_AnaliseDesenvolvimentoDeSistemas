#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Digite um numero inteiro:\n");
    scanf("%i", &n);

    if (n % 2 == 0)
    {
        printf("O numero digitado e PAR.");
    }
    else
    {
        printf("O numero digitado e IMPAR.");
    }

    return 0;
}
