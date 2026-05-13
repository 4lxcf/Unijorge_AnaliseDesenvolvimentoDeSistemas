/*
Faça um algoritmo que leia a idade de uma pessoa expressa em
anos, meses e dias e mostre-a expressa apenas em dias.
*/

#include <stdio.h>

int main(){
    int years, months, days, daysCount;

    printf("Digite quantos anos de vida a pessoa tem:\n");
    scanf("%d", &years);
    printf("Digite quantos meses de vida a pessoa tem:\n");
    scanf("%d", &months);
    printf("Digite quantos dias de vida a pessoa tem:\n");
    scanf("%d", &days);

    if (years < 0 || months < 0 || months > 11 || days < 0 || days > 30) {
        printf("Erro: valores invalidos.\n");
        return 1;
    }

    daysCount = days + months * 30 + years * 365;

    printf("Essa pessoa viveu por %d dias.\n", daysCount);

    return 0;
}