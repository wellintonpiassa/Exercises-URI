#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);
    
    int contador = 0;
    int i;
    int maior;
    int vetor[N];

    for (i = 0; i< N; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i< N-1; i++)
    {
        if (vetor[i] < vetor[i+1]) 
        {
            contador = 1;
            maior = vetor[i+1];
        }   

        else if (maior < vetor[i+1])
        {
            contador = 0;
        }

        else if (maior == vetor[i+1]){
            contador = 0;
            
        }
        
    }

    printf("%d\n", contador);

    
}
