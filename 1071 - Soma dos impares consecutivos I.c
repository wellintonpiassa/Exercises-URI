#include <stdio.h>

int main()
{
    int X;
    int Y;
    int somador = 0;

    scanf("%d", &X);
    scanf("%d", &Y);

    Y++;

    while (Y < X)
    {
        if(Y % 2 == 1 || Y % 2 == -1)
        {
            somador += Y;
        }
        Y++;
    }

    printf("%d\n", somador);
    
}