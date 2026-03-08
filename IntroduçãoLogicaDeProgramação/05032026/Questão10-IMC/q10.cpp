#include <stdio.h>

int main(int argc, char const *argv[])
{
    float peso, altura, imc;

    printf("Digite o peso:\n");
    scanf("%f", &peso);

    printf("Digite o altura:\n");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("%.2f", imc);

    return 0;
}
