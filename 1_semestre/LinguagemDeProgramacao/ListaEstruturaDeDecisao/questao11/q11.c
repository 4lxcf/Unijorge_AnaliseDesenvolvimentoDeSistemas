/*
O custo do consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos
(aplicados ao custo de fábrica). Supondo que a porcentagem do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo que leia
o custo de fábrica de um carro e escreva o custo ao consumidor.
*/

#include <stdio.h>

int main(){
    float factoryCost, distributorPercentage=0.28, taxes=0.45, clientCost;

    printf("Digite o custo de fabrica do carro novo:\n");
    scanf("%f", &factoryCost);

    if (factoryCost <= 0) {
        printf("Erro: custo de fabrica invalido.\n");
        return 1;
    }

    clientCost = factoryCost * (1 + distributorPercentage + taxes);

    printf("O custo do carro para o cliente eh: R$ %.2f", clientCost);

    return 0;
}
