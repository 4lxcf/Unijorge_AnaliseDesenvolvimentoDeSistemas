/*
Um banco concederá um crédito especial aos seus clientes, variável com saldo médio no ultimo ano. Faça um algoritmo que leia o saldo médio de um cliente
e calcule o valor do crédito de acordo com a tabela abaixo. Mostre uma mensagem informando o saldo médio e o valor do crédito. (use o comando caso-de e
não faça repetições)
de 0 a 200 - nenhum crédito
de 201 a 400 - 20% do valor do saldo médio
de 401 a 600 - 30% do valor do saldo médio
acima de 601 - 40% do valor do saldo médio
*/
#include <stdio.h>

int main(){
    float averageBalance, credit;
    int select;

    printf("Digite o saldo medio do cliente:\n");
    scanf("%f", &averageBalance);

    if (averageBalance <= 0){
        printf("Valor informado invalido.\n");
        return 1;
    }

    if (averageBalance <= 200.){
        select = 1;
    } else if (averageBalance <= 400.){
        select = 2;
    } else if (averageBalance <= 600.){
        select = 3;
    } else {
        select = 4;
    }

    switch(select){
    case 2:
        credit = 0.2;
        break;
    case 3:
        credit = 0.3;
        break;
    case 4:
        credit = 0.4;
        break;
    default:
        credit = 0.;
        break;
    }

    printf("Saldo Medio: R$ %.2f\n", averageBalance);
    printf("Valor do Credito (%.f%%): R$ %.2f\n", credit * 100., averageBalance * credit);

    return 0;
}
