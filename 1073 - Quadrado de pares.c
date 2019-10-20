#include <stdio.h>

int main()
{
    int N;
    int cont = 1;
    int quadrado;

    scanf("%d", &N);

    if (cont % 2 != 0)
    {
        cont++;
    }
    
    while (cont <= N)
    {
        if(cont%2 == 0){
            quadrado = cont*cont;
            printf("%d^2 = %d\n", cont, quadrado);
            cont += 2;
        }    
    }
    
    
}