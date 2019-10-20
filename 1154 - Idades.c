#include <stdio.h>

int main()
{
    int idade;
    float soma = 0;
    float resultado;
    int pessoas = 0;

    do
    {
        scanf("%d", &idade);
        if (idade >= 0)
        {
            soma += idade;
            pessoas++;
        }

    }while (idade >= 0);

    resultado = soma / pessoas;

    printf("%.2f\n", resultado);
}