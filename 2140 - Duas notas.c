#include <stdio.h>

int main()
{
    int N; // Valor da compra do cliente
    int M; // Valor pago pelo cliente
    int i;
    int troco;
    int contador = 0;
    int vetor[21] = {4, 7, 10, 12, 15, 20, 22, 25, 30, 40, 52, 55, 60, 70, 100, 102, 105, 110, 120, 150, 200};

    scanf("%d %d", &N, &M);

    while (N > 0 && M > 0)
    { 
        for (i = 0; i < 21; i++)
        {
            troco = M - N;

            if (vetor[i] == troco)
            {
                printf("possible\n");
                break;
            }
        }

        for (i = 0; i < 21; i++)
        {
            troco = M - N;

            if (vetor[i] == troco)
            {
                contador++;
            }
        }

        if (contador == 0)
        {
            printf("impossible\n");
        }

        contador = 0;

        scanf("%d %d", &N, &M);
    }
    
    return 0;
}


