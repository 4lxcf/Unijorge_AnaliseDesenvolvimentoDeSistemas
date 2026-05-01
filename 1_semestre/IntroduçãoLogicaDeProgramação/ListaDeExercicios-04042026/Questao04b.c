/*
Escreva um programa que pergunte a quantidade de km percorridos por um
carro alugado pelo usuario, assim como a quantidade de dias pelos quais o carro foi alugado. Calcule o preco a pagar, sabendo que o carro custa R$ 60 por dia e R$ 0,15 por km rodado. (2,0)
*/

#include <stdio.h>

int main(){
    float kmPercorrido, valorTotal;
    int diasAlugados;
    
    printf("Quantos km percorridos?\n");
    scanf("%f", &kmPercorrido);
    printf("O carro foi alugado por quantos dias?\n");
    scanf("%d", &diasAlugados);
    
    valorTotal = (60 * diasAlugados) + (0.15 * kmPercorrido);
    
    printf("Com %.1fkm percorridos e alugado por %d dias, o valor do aluguel fica R$ %.2f.", kmPercorrido, diasAlugados, valorTotal);
    
    return 0;
}
