#include <stdio.h>

int main()
{
    int X;
    int Y;
    int contador; 
    int soma = 0;

    scanf("%d", &X);
    scanf("%d", &Y);

    if (X > Y)
    {
        contador = Y;
        while (contador <= X)
        {
            if (contador % 13 != 0)
            {
                soma += contador;
            }
            contador++;
        }
    }

    if (Y > X)
    {
        contador = X;
        while (contador <= Y)
        {
            if (contador % 13 != 0)
            {
                soma += contador;
            }
            contador++;
        }
    }

    printf("%d\n", soma);
}