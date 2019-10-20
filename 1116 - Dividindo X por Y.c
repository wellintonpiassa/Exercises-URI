#include <stdio.h>

int main()
{
    float x;
    float y;
    int N;
    int cont = 0;
    float resultado;

    scanf ("%d", &N);

    while(cont < N)
    {
        scanf("%f %f", &x, &y);

        resultado = x/y;

        if(y == 0)
        {
            printf("divisao impossivel\n");
        }

        else
        {
            printf("%.1f\n", resultado);
        }

        cont++;
    }

}