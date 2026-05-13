/*
Escreva um algoritmo que leia três números inteiros e positivos (A, B, C) e
calcule a seguinte expressão: D = (R + S) / 2, onde R = (A + B)² e S = (B + C)².
*/

#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, r, s;
    float d;

    printf("Digite o valor de A:\n");
    scanf("%d", &a);
    printf("Digite o valor de B:\n");
    scanf("%d", &b);
    printf("Digite o valor de C:\n");
    scanf("%d", &c);

    r = pow((a + b), 2);
    s = pow((b + c), 2);
    d = (float)(r + s) / 2.;

    printf("R=%d\nS=%d\nD=%.2f\n", r, s, d);

    return 0;
}