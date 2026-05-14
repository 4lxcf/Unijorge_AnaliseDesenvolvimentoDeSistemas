/*
Tendo como dados de entrada a altura e o sexo de uma pessoa (M - masculino e F - feminino), construa um algoritmo que calcule seu peso ideal, utilizando
as seguintes fórmulas:
- para homens: (72.7 * h) - 58
- para mulheres: (62.1 * h) - 44.7
*/

#include<stdio.h>

int main(){
    char gender;
    float height, idealWeight;

    printf("Digite o genero da pessoa:\n");
    printf("M ou m -> Masculino\n");
    printf("F ou f -> Feminino\n");
    scanf("%c", &gender);
    printf("Digite a altura da pessoa:\n");
    scanf(" %f", &height);

    if(gender != 'M' && gender != 'm' && gender != 'F' && gender != 'f' && height <= 0.){
        printf("Valores digitados sao incorretos.");
        return 1;
    }

    if (gender == 'M' || gender == 'm'){
        idealWeight = (72.7 * height) - 58.;
    } else {
        idealWeight = (62.1 * height) - 44.7;
    }

    printf("Peso ideal dessa pessoa: %.1f kg", idealWeight);

    return 0;
}
