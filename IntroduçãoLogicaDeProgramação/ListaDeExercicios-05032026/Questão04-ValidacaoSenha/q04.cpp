#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char password[60];

    printf("Digite sua senha abaixo:\n");
    scanf("%s", &password);

    if (strlen(password) <= 8)
    {
        printf("Senha invalida. Precisa ter no minimo 8 caracteres.");
    }
    else
    {
        printf("Senha valida. Criada com sucesso.");
    }

    return 0;
}
