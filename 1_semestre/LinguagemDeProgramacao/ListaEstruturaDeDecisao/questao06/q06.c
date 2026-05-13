/*
Construa um algoritmo que, tendo como dados de entrada dois pontos
quaisquer no plano, P(x1,y1) e P(x2,y2), escreva a distância entre eles. A
fórmula que efetua tal cálculo é: d=raiz quadrada de [ (x2-x1)² + (y2-y1)² ]
*/

#include <stdio.h>
#include <math.h>

int main(){
    float x1, y1, x2, y2, d;

    printf("Digite a coordenada X do Ponto1:\n");
    scanf("%f", &x1);
    printf("Digite a coordenada Y do Ponto1:\n");
    scanf("%f", &y1);
    printf("Digite a coordenada X do Ponto2:\n");
    scanf("%f", &x2);
    printf("Digite a coordenada Y do Ponto2:\n");
    scanf("%f", &y2);

    d = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));

    printf("Distancia=%.2f\n", d);

    return 0;
}