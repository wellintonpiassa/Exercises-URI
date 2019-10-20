#include <stdio.h>

int main()
{
    int X;
    int Y;
    int contador1 = 0;
    int contador2 = 0;
    int indice = 1;

    scanf("%d %d", &X, &Y);

    while (indice < Y)
    {
        while (contador2 < X)
        {
            if(contador2 == X-1)
            {
                printf("%d\n", indice);
            }

            else
            {
                printf("%d ", indice);
            }

            contador2++;
            indice++;
        }
        //contador1++;
        contador2 = 0;
    }
}