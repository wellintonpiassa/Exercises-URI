#include <stdio.h>

int main()
{
    int X;
    int Y;
    int contador;
    int memoria;

    scanf("%d", &X);
    scanf("%d", &Y);

    if (X > Y)
    {
        contador = Y+1;

        while (contador < X)
        {
            if (contador % 5 == 2 || contador % 5 == 3)
            {
                memoria = contador;
                printf("%d\n", memoria);
            }

            contador++;
        }
    }

    if (Y > X)
    {
        contador = X+1;

        while (contador < Y)
        {
            if (contador % 5 == 2 || contador % 5 == 3)
            {
                memoria = contador;
                printf("%d\n", memoria);
            }

            contador++;
        }
    }
    
}