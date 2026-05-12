/*
Crie um programa que determine se um ponto (X,Y) está dentro de um círculo ou
não. Para tanto o programa deverá ler os seguintes dados de teclado:
- coordenadas do centro do círculo;
- raio do círculo;
- ponto a ser testado.
O programa deverá imprimir na tela mensagens perguntando ao usuário os dados
necessários e a seguir permitir que este os digite.
*/

#include <stdio.h>
#include <math.h>


int main(){
    float x_center, y_center, radius, x_point, y_point, dist;

    printf("Digite a coordenada X do centro do circulo: \n");
    scanf("%f", &x_center);
    printf("Digite a coordenada Y do centro do circulo: \n");
    scanf("%f", &y_center);
    printf("Digite o raio do circulo: \n");
    scanf("%f", &radius);
    printf("Agora digite a coordenada X do ponto que deseja testar: \n");
    scanf("%f", &x_point);
    printf("Agora digite a coordenada Y do ponto que deseja testar: \n");
    scanf("%f", &y_point);
    

    dist = pow((x_point - x_center), 2) + pow((y_point - y_center), 2);

    if (dist <= pow(radius, 2))
    {
        printf("O ponto esta dentro do circulo.\n");
    } else {
        printf("O ponto esta fora do circulo.\n");
    }
    
    return 0;
}