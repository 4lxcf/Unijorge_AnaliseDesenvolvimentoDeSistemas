#include <stdio.h>

int main(int argc, char const *argv[])
{
    float distancia, combustivel, consumoMedio;

    printf("Digite a distancia percorrida:\n");
    scanf("%f", &distancia);

    printf("Digite o combustivel gasto:\n");
    scanf("%f", &combustivel);

    consumoMedio = distancia / combustivel;

    printf("O Consumo Medio foi de: %.1f km/L", consumoMedio);

    return 0;
}
