#include <stdio.h>

int main()
{
    int N; // quantidade de casos de teste
    int i;
    int maior;
    int posicao = 0;

    scanf("%d", &N);

    int vetor[N];

    for (i = 0; i< N; i++){
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];

    for(i = 0; i < N-1; i++)
    {
        if (vetor[i+1] > maior){
            maior = vetor[i+1];
        }
        
        if (vetor[i+1] < maior){
            posicao = i+2;
            break;
        }

        //printf("maior = %d --- posicao = %d\n", maior, posicao);
    }

    printf("%d\n", posicao);

    return 0;
}