/*
Monte as linhas de comando que recebam pelo teclado Guilherme, 865.547 e 18
e os guarde em variaveis do tipo mais adequado(1,0)
*/

#include <stdio.h>

int main(){
    char nome[12];
    float nD;
    int nI;
    
    printf("Digite o nome:\n");
    scanf("%s", &nome);
    printf("Digite o numero com casas decimais:\n");
    scanf("%f", &nD);
    printf("Digite o numero inteiro:\n");
    scanf("%d", &nI);
    
    // printf("Nome: %s || Numero Decimal: %.3f || Numero Inteiro: %d\n", nome, nD, nI);
    
    return 0;
}
