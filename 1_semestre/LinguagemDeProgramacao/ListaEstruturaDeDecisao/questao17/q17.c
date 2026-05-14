/*
Faça um algoritmo que leia um numero inteiro e mostre uma mensagem indicando se este número é par ou impar, e se é positivo ou negativo.
*/

#include <stdio.h>

int main(){
    int n;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("O numero digitado eh par.\n");
    } else {
        printf("O numero digitado eh impar.\n");
    }

    if (n >= 0)
    {
        printf("O numero digitado eh positivo.\n");
    } else {
        printf("O numero digitado eh negativo.\n");
    }

    return 0;
}
