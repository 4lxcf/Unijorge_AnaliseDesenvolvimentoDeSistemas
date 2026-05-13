/*
Elaborar um algoritmo que lê 2 valores a e b e os escreve com a mensagem: "São multiplos" ou "Não são multiplos".
*/

#include <stdio.h>

int main(){
    int a, b;

    printf("Digite o valor de a:\n");
    scanf("%d", &a);
    printf("Digite o valor de b:\n");
    scanf("%d", &b);

    if (b == 0)
    {
        printf("Impossivel definir. B eh igual a 0.");
        return 1;
    }

    if (a % b == 0)
    {
        printf("Sao multiplos.");
    } else {
        printf("Nao sao multiplos.");
    }
    
    return 0;
}
