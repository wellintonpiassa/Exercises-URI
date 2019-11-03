#include <stdio.h>
#include <math.h>

int main()
{
    int n, soma, contador;
    
    scanf("%d", &n);

    while(n != 0)
    {
        soma = 0;
        contador = 0;
        
        while(contador <= n)
        {
            soma += pow(contador, 2); 
            contador++;
        }

        printf("%d\n", soma);
        
        scanf("%d", &n);
    }

    return 0;
}