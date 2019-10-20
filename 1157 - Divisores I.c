#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    int contador = 1;

    while(contador <= N)
    {
        if(N % contador == 0)
        {
            printf("%d\n", contador);
        }
        contador++;
    } 

}