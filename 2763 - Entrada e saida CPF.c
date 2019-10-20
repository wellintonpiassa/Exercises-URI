#include <stdio.h>

int main()
{
    char cpf[15];
    int i;
    
    scanf("%s", cpf);

    for (i = 0; i < 3; i++)
    {
        printf("%c", cpf[i]);
    }

    printf("\n");

    for (i = 4; i < 7; i++)
    {
        printf("%c", cpf[i]);
    }

    printf("\n");

    for (i = 8; i < 11; i++)
    {
        printf("%c", cpf[i]);
    }

    printf("\n");

    for (i = 12; i < 14; i++)
    {
        printf("%c", cpf[i]);
    }

    printf("\n");






    return 0;
}