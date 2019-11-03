#include <stdio.h>

int main()
{
    int N[2], D[2], V[2];
    int i;
    double mts1, mts2, x, y;

    for (i = 0; i < 2; i++)
    {
        scanf("%d %d %d", &N[i], &D[i], &V[i]);
    }       

    //CASO A DISTANCIA SEJA IGUAL, O QUE IMPORTA É SOMENTE A VELOCIDADE MÁXIMA
    if (D[0] == D[1])
    {
        if(V[0] > V[1])
            printf("%d\n", N[0]);

        else 
            printf("%d\n", N[1]);
    }

    //CASO A VELOCIDADE SEJA A MESMA, O QUE VAI IMPORTAR É A DISTANCIA MINIMA
    if (V[0] == V[1])
    {
        if (D[0] < D[1])
            printf("%d\n", N[0]);

        else 
            printf("%d\n", N[1]);
    }

    else 
    {
        mts1 = V[0] / 3.6;
        mts2 = V[1] / 3.6;

        x = D[0] / mts1;
        y = D[1] / mts2;

        if(y < x)
            printf("%d\n", N[1]);

        else
            printf("%d\n", N[0]);
    }

    return 0;
}