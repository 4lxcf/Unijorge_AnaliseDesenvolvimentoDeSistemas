/*
Crie um programa que leia as notas de um aluno e faça o cálculo de sua média. O
programa deve considerar as seguintes regras:
● sempre deve solicitar duas notas;
● caso a média G1 das duas notas seja maior ou igual a 7 então o programa deve
imprimir a mensagem "Aprovado em G1" e encerrar;
● caso a média G1 seja menor do que 7 é maior do que 4 o programa deve
solicitar a nota de G2 e calcular a partir disto a média final (entre G1 e G2);
● Se a média final for menor do que 5 o programa deve imprimir a mensagem
"Reprovado" e encerrar. Caso contrário o programa deve imprimir a mensagem
"Aprovado" e encerrar.
*/

#include <stdio.h>

int main(){
    float n1, n2, g1, g2, media;

    printf("Digite a primeira nota do aluno: \n");
    scanf("%f", &n1);
    printf("Digite a segunda nota do aluno: \n");
    scanf("%f", &n2);

    g1 = (n1 + n2) / 2;

    if (g1 >= 7)
    {
        printf("Aprovado em G1.\n");
    } else if (g1 > 4) {
        printf("Digite a nota de G2 para calcular a media final:\n");
        scanf("%f", &g2);

        media = (g1 + g2) / 2;

        if (media < 5)
        {
            printf("Reprovado.\n");
        } else {
            printf("Aprovado.\n");
        }     
    } else {
        printf("Reprovado.\n");
    }

    return 0;
}