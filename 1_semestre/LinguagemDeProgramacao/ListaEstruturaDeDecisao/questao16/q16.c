/*
Escreva um algoritmo que leia o código de um aluno e sua tres notas. Calcule a media ponderada do aluno, considerando que o peso para a
maior nota seja 4 e para as duas restantes, 3. Mostre o código do aluno, suas tres notas, a media calculada e uma mensagem "APROVADO" se
a media for maior ou igual a 5 e "REPROVADO" se a media for menor que 5.
*/

#include <stdio.h>

int main(){
    int studentCode;
    float n1, n2, n3, weightedAverage;

    printf("Digite o codigo de um aluno:\n");
    scanf("%d", &studentCode);
    printf("Digite a primeira nota do aluno:\n");
    scanf("%f", &n1);
    printf("Digite a segunda nota do aluno:\n");
    scanf("%f", &n2);
    printf("Digite a terceira nota do aluno:\n");
    scanf("%f", &n3);

    if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10 || n3 < 0 || n3 > 10) {
        printf("Erro: valores incorretos. As notas devem ser entre 0. e 10.\n");
        return 1;
    }

    if (n1 >= n2 && n1 >= n3) {
        weightedAverage = ((n1 * 4) + (n2 + n3) * 3) / 10;
    } else if (n2 >= n3) {
        weightedAverage = ((n2 * 4) + (n1 + n3) * 3) / 10;
    } else {
        weightedAverage = ((n3 * 4) + (n1 + n2) * 3) / 10;
    }

    printf("CODIGO DO ALUNO: %d\n", studentCode);
    printf("NOTA 1 DO ALUNO: %.1f\n", n1);
    printf("NOTA 2 DO ALUNO: %.1f\n", n2);
    printf("NOTA 3 DO ALUNO: %.1f\n", n3);
    printf("MEDIA PONDERADA: %.1f\n", weightedAverage);
    if (weightedAverage >= 5)
    {
        printf("APROVADO!\n");
    } else {
        printf("REPROVADO!\n");

    }
    
    return 0;
}
