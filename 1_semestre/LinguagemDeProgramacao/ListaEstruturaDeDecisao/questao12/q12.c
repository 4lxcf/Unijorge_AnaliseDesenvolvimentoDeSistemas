/*
Um sistema de equações lineares do tipo:
ax + by = c
dx + ey = f, pode ser resolvido segundo mostrado abaixo:
x = (ce - bf) / (ae - bd) | y = (af - cd) / (ae - bd)
Escreva um algoritmo que lê os coeficientes a, b, c, d, e, f e calcula e mostra os valores de x e y.
*/

#include <stdio.h>

int main(){
    float a, b, c, d, e, f, x, y, denominator;

    printf("Digite o coeficiente a:\n");
    scanf("%f", &a);
    printf("Digite o coeficiente b:\n");
    scanf("%f", &b);
    printf("Digite o coeficiente c:\n");
    scanf("%f", &c);
    printf("Digite o coeficiente d:\n");
    scanf("%f", &d);
    printf("Digite o coeficiente e:\n");
    scanf("%f", &e);
    printf("Digite o coeficiente f:\n");
    scanf("%f", &f);
    
    denominator = (a * e) - (b * d);

    if (denominator == 0) {
        printf("Erro: sistema sem solucao unica (divisao por 0).\n");
        return 1;
    }

    x = ((c * e) - (b * f)) / denominator;
    y = ((a * f) - (c * d)) / denominator;

    printf("Valor de X: %.2f\n", x);
    printf("Valor de Y: %.2f\n", y);

    return 0;
}
