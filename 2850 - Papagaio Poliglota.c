#include <stdio.h>
#include <string.h>

int main()
{
    char entrada[25];

    while(scanf(" %[^\n]", entrada) != EOF)
    {
        if(strcmp(entrada, "esquerda") == 0)
            printf("ingles\n");

        else if(strcmp(entrada, "direita") == 0)
            printf("frances\n");

        else if(strcmp(entrada, "nenhuma") == 0)
            printf("portugues\n");

        else if(strcmp(entrada, "as duas") == 0)
            printf("caiu\n");
    }

    return 0;
}