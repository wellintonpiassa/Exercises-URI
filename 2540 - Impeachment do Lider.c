#include <stdio.h>
#include <math.h>

int main()
{
    int N, i;
    int contador1 = 0;
    int contador0 = 0;
    float divisor;

    while ((scanf("%d", &N)) != EOF)
    {
        int vetor[N];
        contador1 = 0;

        for(i = 0; i < N; i++)
            scanf("%d", &vetor[i]);
        
        for(i = 0; i < N; i++)
        {
            if (vetor[i] == 1)
                contador1++;
        }
 
        divisor = (2./3.) * N;

        if (contador1 >= divisor)
            printf("impeachment\n");

        else
            printf("acusacao arquivada\n");
    }
    
    return 0;
}