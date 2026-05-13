/*
Elaborar um algoritmo que lê 3 valores a, b, c e os escreve. A seguir, encontre o maior dos 3 valores e o escreva com a mensagem: "É o 
maior".
*/

#include <stdio.h>

int main(){
    int a, b, c, maior;

    printf("Digite o valor de a:\n");
    scanf("%d", &a);
    printf("Digite o valor de b:\n");
    scanf("%d", &b);
    printf("Digite o valor de c:\n");
    scanf("%d", &c);

    printf("A: %d\n", a);
    printf("B: %d\n", b);
    printf("C: %d\n", c);
    
    if (a >= b && a >= c) {
        maior = a;
    } else if (b >= c) {
        maior = b;
    } else {
        maior = c;
    }

    printf("O maior valor apresentado foi: %d\n", maior);
    
    return 0;
}
