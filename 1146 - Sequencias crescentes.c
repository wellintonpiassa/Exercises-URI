#include <stdio.h>

int main()
{
    int X;
    int contador = 0;
    int indice = 1;


    do 
    {
        scanf("%d", &X);

        while (contador < X)
        {
            if (contador == X-1)
            {
                printf("%d\n", indice);
            }

            else
            {
                printf("%d ", indice);
            }
            
            contador++; 
            indice++;
        }
        indice = 1;
        contador = 0;
        
    }while (X != 0);
}