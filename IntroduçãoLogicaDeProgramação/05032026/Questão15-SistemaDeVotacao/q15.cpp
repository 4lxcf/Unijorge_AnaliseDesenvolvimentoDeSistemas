#include <stdio.h>

int main(int argc, char const *argv[])
{
    int votos = -1, candidato1 = 0, candidato2 = 0, candidato3 = 0;

    while (votos != 0)
    {
        printf("Compute seu voto com 1, 2 ou 3:\n");
        scanf("%i", &votos);

        if (votos != 0 && votos != 1 && votos != 2 && votos != 3)
        {
            printf("Voto nao computado.\n");
        }
        else
        {
            if (votos == 1)
            {
                candidato1++;
            }

            if (votos == 2)
            {
                candidato2++;
            }

            if (votos == 3)
            {
                candidato3++;
            }
        }
    }

    if (candidato1 == candidato2 && candidato2 == candidato3)
    {
        printf("Empate Geral");
    }
    else
    {
        if (candidato1 >= candidato2 && candidato1 >= candidato3)
        {
            printf("O vencedor por votacao foi o candidato 1.\n");
        }
        else if (candidato2 >= candidato1 && candidato2 >= candidato3)
        {
            printf("O vencedor por votacao foi o candidato 2.\n");
        }
        else if (candidato3 >= candidato1 && candidato3 >= candidato2)
        {
            printf("O vencedor por votacao foi o candidato 3.\n");
        }
        else

        {
            printf("Algo deu errado.");
        }
    }

    return 0;
}
