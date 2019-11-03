#include <stdio.h>

int main()
{
    int vetor[3];
    int i, j;
    int maior;

    for(i = 0; i < 3; i++)
        scanf("%d", &vetor[i]);
    
    for(j = 0; j < 3; j++)
    {
        for(i = 0; i < 2; i++)
        {
            if (vetor[i] < vetor[i+1])
            {
                maior = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = maior;
            }
        }
    }

    printf("%d\n", vetor[1]);

    return 0;
}