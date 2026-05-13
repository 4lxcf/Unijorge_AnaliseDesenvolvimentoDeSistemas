/*
Crie um programa que exiba um menu na tela e que permita ao usuário a escolha de
uma opção.
Imprima uma mensagem dizendo qual foi a opção escolhida.
Exemplo de Menu
1 - Gravar
2 - Carregar
3 - Apagar
4 - Inserir
5 - Fim
*/

#include <stdio.h>

int main(){
    int select;

    printf("===MENU===\n1. Gravar\n2. Carregar\n3. Apagar\n4. Inserir\n5. Fim\n");
    scanf("%d", &select);

    switch (select)
    {
    case 1:
        printf("A opcao escolhida foi: 1. Gravar\n");
        break;
    case 2:
        printf("A opcao escolhida foi: 2. Carregar\n");
        break;
    case 3:
        printf("A opcao escolhida foi: 3. Apagar\n");
        break;
    case 4:
        printf("A opcao escolhida foi: 4. Inserir\n");
        break;
    case 5:
        printf("A opcao escolhida foi: 5. Fim\n");
        break;
    default:
        printf("Opcao invalida. Digite um numero entre 1 e 5.\n");
        break;
    }
    
    return 0;
}