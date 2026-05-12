#include <stdio.h>

int main(int argc, char const *argv[])
{
    float notas = 0, mediaGeral, somatorio = 0, qtd = 0;

    while (notas != -1)
    {
        printf("Digite a nota de um aluno:\n");
        scanf("%f", &notas);

        if (notas == -1)
        {
            break;
        }

        somatorio = somatorio + notas;
        qtd++;
    }

    mediaGeral = somatorio / qtd;

    printf("%.1f", mediaGeral);

    return 0;
}
