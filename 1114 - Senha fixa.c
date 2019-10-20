#include <stdio.h>
#include <stdbool.h>

int main()
{
    int entrada;
    int sair = true;

    while (sair == true)
    {
        scanf("%d", &entrada);

        switch (entrada)
        {
        case 2002:
            printf("Acesso Permitido\n");
            sair = false;
            break;

        default:
            printf("Senha Invalida\n");
            break;
        }
    }
}