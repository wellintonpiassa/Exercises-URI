#include <stdio.h>

int main()
{
    int N;
    int menor;
    int posicao;
    int i;

    scanf("%d", &N);

    int X[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &X[i]);
    }

    menor = X[0];

    for (i = 0; i < N-1; i++)
    {
        if(menor > X[i])
        {
            menor = X[i];
            posicao = i;
        }
            
    }
    
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n",posicao);

    
}