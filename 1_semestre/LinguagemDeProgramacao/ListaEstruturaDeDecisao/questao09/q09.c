/*
Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final
deste aluno. Considerar que a média é ponderada e que o peso das notas é:
2,3 e 5, respectivamente.
*/

#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota do aluno:\n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno:\n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota do aluno:\n");
    scanf("%f", &nota3);

    if (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10 || nota3 < 0 || nota3 > 10) {
        printf("Erro: valores invalidos.\n");
        return 1;
    }

    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;

    printf("A media do aluno foi de: %.1f.\n", media);

    return 0;
}