/*
O cardápio de uma lanchonete é o seguinte:
Cachorro quente - 100 - 1.20
Bauru simples - 101 - 1.30
Bauru com ovo - 102 - 1.50
Hamburger - 103 - 1.20
Cheeseburguer - 104 - 1.30
Refrigerante - 105 - 1.00

Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche. Considere que a cada execução somente
será calculado um item.
*/

#include <stdio.h>

int main(){
    int code, quantity;

    printf("=== CARDAPIO ===\n");
    printf("100. Cachorro Quente  - R$ 1.20\n");
    printf("101. Bauru Simples    - R$ 1.30\n");
    printf("102. Bauru com Ovo    - R$ 1.50\n");
    printf("103. Hamburguer       - R$ 1.20\n");
    printf("104. Cheeseburguer    - R$ 1.30\n");
    printf("105. Refrigerante     - R$ 1.00\n\n");

    printf("Digite o codigo do produto:\n");
    scanf("%d", &code);
    printf("Digite a quantidade desejada:\n");
    scanf("%d", &quantity);

    switch(code){
    case 100:
        printf("Valor Total: R$ %.2f.\n", quantity * 1.2);
        break;
    case 101:
        printf("Valor Total: R$ %.2f.\n", quantity * 1.3);
        break;
    case 102:
        printf("Valor Total: R$ %.2f.\n", quantity * 1.5);
        break;
    case 103:
        printf("Valor Total: R$ %.2f.\n", quantity * 1.2);
        break;
    case 104:
        printf("Valor Total: R$ %.2f.\n", quantity * 1.3);
        break;
    case 105:
        printf("Valor Total: R$ %.2f.\n", quantity * 1.);
        break;
    default:
        printf("Aconteceu algum erro.");
        break;
    }

    return 0;
}
