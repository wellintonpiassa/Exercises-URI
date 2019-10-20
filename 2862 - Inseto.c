#include <stdio.h>

int main()
{
    int C;
    int N;
    int contador = 0;

    scanf("%d", &C);

    while(contador < C)
    {
        scanf("%d", &N);

        if (N > 8000)
        {
            printf("Mais de 8000!\n");
        }

        else
        {
            printf("Inseto!\n");
        }
        contador++;
    }
}