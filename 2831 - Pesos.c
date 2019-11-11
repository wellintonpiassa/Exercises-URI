#include <stdio.h>

int main()
{
    int n, i;
    int contador = 0;

    scanf("%d", &n);

    int vetor[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    if (vetor[0] - 0 > 8)
        contador++;

    for(i = 1; i < n; i++)
    {
        if (vetor[i] - vetor[i-1] > 8)
            contador++;
    }

    if(contador == 0)
        printf("S\n");
    
    else
        printf("N\n");

    return 0;
}