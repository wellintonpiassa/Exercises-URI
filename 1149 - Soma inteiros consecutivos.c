#include <stdio.h>

int main()
{
    int A;
    int N;
    int resposta = 0;
    int contador = 0;

    scanf("%d", &A);

    do
    {

    scanf("%d", &N);

    }while(N <= 0);

    while(contador < N)
    {
        resposta += A + contador;    

        contador++;
    }

    printf("%d\n", resposta);



}