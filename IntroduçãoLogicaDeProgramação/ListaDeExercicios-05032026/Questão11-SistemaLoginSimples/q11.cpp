#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char userDB[] = "usuario", passwordDB[] = "password", user[10], password[10];

    printf("USUARIO:\n");
    scanf("%s", &user);

    printf("PASSWORD:\n");
    scanf("%s", &password);

    if (strcmp(user, userDB) == 0 && strcmp(password, passwordDB) == 0)
    {
        printf("Acesso AUTORIZADO.");
    }
    else
    {
        printf("Acesso NAO AUTORIZADO.");
    }

    return 0;
}
