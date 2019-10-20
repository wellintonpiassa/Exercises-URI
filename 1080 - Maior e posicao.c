#include <stdio.h>

int main()
{
    int tamanho = 100;
    int i;
    int vet[tamanho];
    int posicao = 0;

    for(i = 0; i<tamanho; i++)
    {
        scanf("%d", &vet[i]);
    }

    int maior = vet[0];

    for(i = 0; i<tamanho; i++)
    {
        if(vet[i] > maior)
        {
            maior = vet[i];
            posicao = i;
        }
    }

    printf("%d\n%d\n", maior, posicao+1);

    return 0;
}