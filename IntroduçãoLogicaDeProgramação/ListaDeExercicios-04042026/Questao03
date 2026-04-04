/*
Uma empresa resolveu dar um aumento de salario aos seus colaboradores e lhe contrataram para desenvolver o programa que calculará os reajustes. O reajuste será
calculado, baseado no salário atual, com base no critério:
– Salários ate R$1200, 00 (incluindo) : aumento de 25%
– Salarios entre R$1200, 00 e R$1900, 00 : aumento de 20%
– salarios entre R$1900, 00 e R$2700, 00 (incluindo) : aumento de 15%
– salarios de R$2700, 00 em diante : aumento de 10%
Faca um programa que:
– Possua uma estrutura de repeticao e que calcule o reajuste de n salario ate que seja informado o valor zero ou um valor negativo.
– Dentro da estrutura de Repeticao o programa devera receber o salario do colaborador.
– Apos receber o salario devera informar na tela:
1) O salario antes do reajuste
2) O percentual de aumento aplicado
3) O valor do aumento
4) O novo salario, apos o aumento.
*/

#include <stdio.h>

int main() {
    int aux = 1;
    float salarioAtual, aumentoPorcento, aumentoValor, salarioNovo;
    
    while(aux > 0){
        printf("Digite o valor do salario atual do colaborador: (para finalizar digite 0 ou -1)\n");
        scanf("%f", &salarioAtual);
        
        if(salarioAtual > 0){
            if(salarioAtual > 0 && salarioAtual <= 1200.){
                aumentoPorcento = 0.25;
            }else if (salarioAtual > 1200. && salarioAtual < 1900.){
                aumentoPorcento = 0.2;
            }else if (salarioAtual >= 1900. && salarioAtual <= 2700.){
                aumentoPorcento = 0.15;
            }else{
                aumentoPorcento = 0.1;
            }
            aumentoValor = salarioAtual * aumentoPorcento;
            salarioNovo = salarioAtual + aumentoValor;
        
            printf("########################\n");
            printf("Para este colaborador teremos:\n");
            printf("Salario Atual: R$ %.2f.\n", salarioAtual);
            printf("Porcentagem do Aumento: %.2f%\n", aumentoPorcento*100);
            printf("Valor do Aumento: R$ %.2f.\n", aumentoValor);
            printf("Novo Salario: R$ %.2f.\n\n", salarioNovo);
        }else{
            aux=0;
        }
    }
    return 0;
}
