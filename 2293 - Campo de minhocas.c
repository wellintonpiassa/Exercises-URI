#include <stdio.h>

int main()
{
    int n, m, i, j, resultado;

    scanf("%d %d", &n, &m);

    int vetor[n][m];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &vetor[i][j]);
        }
    }

    if(n > 1 && m > 1)
    {
        int tam = n + m;
        int somas[tam];
        int soma = 0;
        int contador = 0;
        
        //SOMANDO NA HORIZONTAL
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                soma = soma + vetor[i][j];
            }

            somas[contador] = soma;
            soma = 0;
            contador++;
        }

        //SOMANDO NA VERTICAL
        for(j = 0; j < m; j++)
        {
            for(i = 0; i < n; i++)
            {
                soma = soma + vetor[i][j];
            }

            somas[contador] = soma;
            soma = 0;
            contador++;
        }

        int aux;
        int contador2 = 0;

        //ORDENANDO
        while(contador2 <= tam)
        {
            for(i = 0; i < tam-1; i++)
            {
                if(somas[i] < somas[i+1])
                {
                    aux = somas[i+1];
                    somas[i+1] = somas[i];
                    somas[i] = aux;
                }
            }

            contador2++;
        }
        printf("%d\n", somas[0]);
    }

    else if(n > 1 && m == 1)
    {    
        int soma = 0;
        int contador = 0;

        for(i = 0; i < n; i++)
            soma = soma + vetor[i][0];

        printf("%d\n", soma);
    }

    else if(n == 1 && m > 1)
    {    
        int soma = 0;
        int contador = 0;

        for(j = 0; j < m; j++)
            soma = soma + vetor[0][j];

        printf("%d\n", soma);
    }


    return 0;
}