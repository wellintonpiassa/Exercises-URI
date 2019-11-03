#include <stdio.h>

int main()
{
    int N, C;
    int S, E;   
    int contador = 0;
    int atual = 0;
    int contador1 = 0;

    scanf("%d %d", &N, &C);

    while (contador < N)
    {
        scanf("%d %d", &S, &E);

            atual = atual - S + E;
            
            if(atual > C)
                contador1++;

        contador++;
    }

    if (contador1 > 0)
        printf("S\n");

    else 
        printf("N\n");

    return 0; 
}