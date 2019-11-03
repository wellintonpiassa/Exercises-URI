#include <stdio.h>

int main()
{
    int N, i;
    int contador = 0;

    scanf("%d", &N);

    int vetor[N];

    for(i = 0; i < 2; i++)
    {
        vetor[i] = 1;
    }

    for(i = 2; i < N; i++)
    {
        vetor[i] = vetor[i-2] + vetor[i-1];
    }

    for(i = N-1; i >= 0; i--)
    {
        if(i == 0)        
            printf("%d\n", vetor[i]);

        else
            printf("%d ", vetor[i]);
    }

    return 0;

}
