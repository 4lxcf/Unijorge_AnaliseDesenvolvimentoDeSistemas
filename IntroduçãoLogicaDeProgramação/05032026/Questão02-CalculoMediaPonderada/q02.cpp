#include <stdio.h>

int main(int argc, char const *argv[])
{
    float prova, trabalho, listaDeExercicio, mediaPonderada;

    printf("Digite a nota da Prova:\n");
    scanf("%f", &prova);

    printf("Digite a nota do Trabalho:\n");
    scanf("%f", &trabalho);

    printf("Digite a nota da Lista de Exercicio:\n");
    scanf("%f", &listaDeExercicio);

    mediaPonderada = (prova * 5 + trabalho * 3 + listaDeExercicio * 2) / 10;

    if (mediaPonderada >= 7)
    {
        printf("O aluno foi APROVADO.");
    }
    else if (mediaPonderada >= 5 && mediaPonderada < 7)
    {
        printf("O aluno esta em RECUPERACAO.");
    }
    else if (mediaPonderada < 5)
    {
        printf("O aluno foi REPROVADO.");
    }
    else
    {
        printf("Algo deu errado!");
    }

    return 0;
}
