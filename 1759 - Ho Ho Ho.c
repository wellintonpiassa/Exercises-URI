#include <stdio.h>

int main()
{
    int N;
    int contador = 0;

    scanf("%d", &N);

    while (contador < N)
    {
        if( contador < N-1)
        {
            printf("Ho ");
        }

        if (contador == N-1)
        {
            printf("Ho!\n");
        }

        contador++;
    }

    return 0;
    

}