/*
Elabore um programa que dada a idade de um nadador classifica-o em uma das
seguintes categorias:
● infantil A = 5 - 7 anos
● infantil B = 8-10 anos
● juvenil A = 11-13 anos
● juvenil B = 14-17 anos
● adulto = maiores de 18 anos
*/

#include <stdio.h>

int main(){
    int age;

    printf("Digite a idade do nadador: \n");
    scanf("%d", &age);

    if (age < 5) {
        printf("Idade invalida. O programa so aceita idades a partir de 5 anos.\n");
    } else if (age <= 7) {
        printf("Nadador - INFANTIL A\n");
    } else if (age <= 10) {
        printf("Nadador - INFANTIL B\n");
    } else if (age <= 13) {
        printf("Nadador - JUVENIL A\n");
    } else if (age <= 17) {
        printf("Nadador - JUVENIL B\n");
    } else {
        printf("Nadador - ADULTO\n");
    }

    return 0;
}