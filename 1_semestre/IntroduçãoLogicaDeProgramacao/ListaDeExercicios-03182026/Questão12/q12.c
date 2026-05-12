/* Leia valor e calcule preço com desconto
e acréscimo.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaração de variaveis
    double valorInicial, valorFinal, auxValor;
    char aux;

    // Atribuição de variaveis
    printf("Digite o valor:\n");
    scanf("%lf", &valorInicial);
    printf("Agora digite \"d\" se for desconto ou \"a\" se for acrescimo.\n");
    scanf(" %c", &aux);
    if (aux == 'd' || aux == 'a')
    {
        if (aux == 'd')
        {
            printf("Digite o valor do DESCONTO em porcento. Ex.: 10%% ou 35.5%%:\n");
            scanf("%lf", &auxValor);
        }
        else
        {
            printf("Digite o valor do ACRESCIMO em porcento. Ex.: 20%% ou 65.5%%:\n");
            scanf("%lf", &auxValor);
        }
    }
    else
    {
        printf("Valor informado nao e valido.");
        return 0; // Inserido um return aqui para sair do MAIN assim que entrar nessa condição.
    }

    // Operação + Impressão na tela. A impressão está comentada porque não foi solicitada.
    if (aux == 'd')
    {
        valorFinal = valorInicial - (valorInicial * auxValor / 100);
        // printf("O valor %.2lf apos o desconto de %.2lf%% fica igual a %.2lf.", valorInicial, auxValor, valorFinal);
    }
    else
    {
        valorFinal = valorInicial + (valorInicial * auxValor / 100);
        // printf("O valor %.2lf apos o acrescimo de %.2lf%% fica igual a %.2lf.", valorInicial, auxValor, valorFinal);
    }

    return 0;
}