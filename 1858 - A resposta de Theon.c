#include <stdio.h>

int main()
{
    int N, i;
    int posicao, menor;

    scanf("%d", &N);

    int vetor[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &vetor[i]);
    }

    menor = vetor[0];
    posicao = 0;

    for (i = 0; i < N; i++)
    {
        if(menor > vetor[i])
        {
            menor = vetor[i];
            posicao = i;
        }
    }

    printf("%d\n", posicao+1);

    return 0;
}