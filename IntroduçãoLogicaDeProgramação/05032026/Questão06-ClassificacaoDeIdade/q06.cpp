#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int idade;
    char faixaEtaria[12];

    printf("Digite a idade da pessoa:\n");
    scanf("%i", &idade);

    if (idade >= 0 && idade <= 12)
    {
        strcpy(faixaEtaria, "Crianca");
    }
    else if (idade >= 13 && idade <= 17)
    {
        strcpy(faixaEtaria, "Adolescente");
    }
    else if (idade >= 18 && idade <= 59)
    {
        strcpy(faixaEtaria, "Adulto");
    }
    else if (idade >= 60)
    {
        strcpy(faixaEtaria, "Idoso");
    }
    else
    {
        printf("Algo deu errado.");
    }

    return 0;
}
