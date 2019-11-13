#include <stdio.h>

int main()
{
    int n, i, contador = 0;
    scanf("%d", &n);
    int vetor[n];

    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    if(n > 1)
    {
        for(i = 0; i < n; i++){
            if(i == 0)
            {
                contador += vetor[i];
                contador += vetor[i+1];
            }

            if(i > 0 && i < n-1)
            {
                contador += vetor[i-1];
                contador += vetor[i];
                contador += vetor[i+1];
            }

            if (i == n-1)
            {
                contador += vetor[i];
                contador += vetor[i-1];
            }

            printf("%d\n", contador);
            contador = 0;
        }
    }

    else
        printf("%d\n", vetor[0]);
    

    return 0;

}