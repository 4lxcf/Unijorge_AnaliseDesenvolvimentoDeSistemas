/* Leia um valor em metros e converta para
cm e mm. Exiba tudo em uma única saída formatada */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração de Variáveis
    float m, cm, mm;

    // Atribuição do valor para a variavel
    printf("Insira um valor em Metros:\n");
    scanf("%f", &m);

    // Operação
    cm = m * 100;
    mm = m * 1000;

    // Impressão do resultado na tela
    printf("O Valor digitado foi: %.2f.\nEsse valor em centimetros: %.2f.\nEsse valor em milimetros: %.2f", m, cm, mm);

    return 0;
}
