#include <stdio.h>

int main(int argc, char const *argv[])
{
    int saque, nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, aux;

    printf("Digite o valor do saque:\n");
    scanf("%i", &saque);

    if (saque % 10 == 0)
    {
        aux = saque;

        while (aux != 0)
        {
            if (aux >= 100)
            {
                aux = aux - 100;
                nota100++;
            }
            if (aux >= 50 && aux < 100)
            {
                aux = aux - 50;
                nota50++;
            }
            if (aux >= 20 && aux < 50)
            {
                aux = aux - 20;
                nota20++;
            }
            if (aux >= 10 && aux < 20)
            {
                aux = aux - 10;
                nota10++;
            }
        }
    }
    else
    {
        printf("Impossivel realizar este saque.\n");
    }

    // printf("Quantidade de Notas de 100: %i\n", nota100);
    // printf("Quantidade de Notas de 50: %i\n", nota50);
    // printf("Quantidade de Notas de 20: %i\n", nota20);
    // printf("Quantidade de Notas de 10: %i\n", nota10);

    return 0;
}
