/*
Escreva um programa que leia um numero inteiro e informe se ele é par ou impar. O resultado deve ser exibido de forma clara ao usuario.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Este eh um numero PAR !\n");
    }
    else
    {
        printf("Este eh um numero IMPAR !\n");
    }

    return 0;
}
