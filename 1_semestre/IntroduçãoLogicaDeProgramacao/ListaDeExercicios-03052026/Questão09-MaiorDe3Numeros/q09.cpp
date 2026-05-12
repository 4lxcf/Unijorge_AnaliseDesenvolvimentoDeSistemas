#include <stdio.h>

int main(int argc, char const *argv[])
{
    float n1, n2, n3;

    printf("Digite o primeiro numero:\n");
    scanf("%f", &n1);

    printf("Digite o segundo numero:\n");
    scanf("%f", &n2);

    printf("Digite o terceiro numero:\n");
    scanf("%f", &n3);

    if (n1 == n2 && n2 == n3)
    {
        printf("%.1f", n1);
    }
    else
    {
        if (n1 >= n2 && n1 >= n3)
        {
            printf("%.1f", n1);
        }
        else if (n2 >= n1 && n2 >= n3)
        {
            printf("%.1f", n2);
        }
        else if (n3 >= n1 && n3 >= n2)
        {
            printf("%.1f", n3);
        }
    }

    return 0;
}
