#include <stdio.h>

int main()
{
    int N;
    int X;
    int Y;
    int contador = 0;
    int somador = 0;

    scanf("%d", &N);

    while (contador < N)
    {
        scanf("%d %d", &X, &Y);
        somador = 0;

        if (X > Y)
        {
            while (X-1 > Y)
            {
                if ((X-1) % 2 == 1)
                {
                    somador += X-1;           
                }

                X--;    
            }
        }

        else if(X < Y)
        {
            while (X+1 < Y)
            {
                if ((X+1) % 2 == 1)
                {
                    somador += X+1;           
                }

                X++;    
            }
        }
        
        printf("%d\n", somador);
        contador++;
    }

    return 0;
    
}