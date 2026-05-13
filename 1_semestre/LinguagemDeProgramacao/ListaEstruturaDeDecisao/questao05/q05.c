/*
Escrever um programa que leia o número de identificação, as 3 notas obtidas por
um aluno nas 3 verificações e a média dos exercícios que fazem parte da avaliação.
Calcular a média de aproveitamento, usando a fórmula:
MA = (Nota1 + Nota2 x 2 + Nota3 x 3 + ME )/7
● A atribuição de conceitos obedece a tabela abaixo:
Média de Aproveitamento - Conceito
9,0 - A
7,5 e < 9,0 - B
6,0 e < 7,5 - C
4,0 e < 6,0 - D
< 4,0 - E
O progama deve escrever o número do aluno, suas notas, a média dos exercícios, a
média de aproveitamento, o conceito correspondente e a mensagem: APROVADO se
o conceito for A,B ou C e REPROVADO se o conceito for D ou E.
*/

#include <stdio.h>

int main(){
    int id;
    float n1, n2, n3, mE, mA;
    char conceito;

    printf("Digite o numero de identificacao do aluno:\n");
    scanf("%d", &id);
    printf("Digite a primeira nota do aluno:\n");
    scanf("%f", &n1);
    printf("Digite a segunda nota do aluno:\n");
    scanf("%f", &n2);
    printf("Digite a terceira nota do aluno:\n");
    scanf("%f", &n3);
    printf("Digite a media dos exercicios do aluno:\n");
    scanf("%f", &mE);

    mA = (n1 + n2 * 2. + n3 * 3. + mE) / 7.;

    if (mA > 10. || mA < 0.)
    {
        printf("Valor invalido. Favor verificar os valores inseridos.\n");
        return 1;
    }
    
    if (mA >= 9.)
    {
        conceito = 'A';
    } else if (mA >= 7.5)
    {
        conceito = 'B';
    } else if (mA >= 6.)
    {
        conceito = 'C';
    } else if (mA >= 4.)
    {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    printf("\nID do aluno: %d\n", id);    
    printf("Notas das Avaliacoes: A1=%.1f | A2=%.1f | A3=%.1f\n", n1, n2, n3);      
    printf("Media dos Exercicios: %.1f\n", mE);    
    printf("Media de Aproveitamento: %.1f\n", mA);    
    printf("Conceito: %c\n", conceito);   
    if (conceito == 'A' || conceito == 'B' || conceito == 'C')
    {
        printf("Aluno Aprovado.\n");
    } else {
        printf("Aluno Reprovado.\n");
    }
     
    return 0;
}