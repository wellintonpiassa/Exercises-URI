#include <stdio.h>

int main()
{
    int N;
    int contador = 0;
    int i;

    scanf("%d", &N);

    int porta[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &porta[i]);
    }

    /*for (i = 0; i< N-1; i++)
    {
        if (porta[i] != porta[i+1])
            contador++;
    }*/

    int resultado = N * (2.0/3.0);

    printf("%d\n", resultado);

    return 0;
}