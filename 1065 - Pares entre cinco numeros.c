#include <stdio.h>

int main()
{
    int valores[5];
    int i;
    int contador = 0;

    for(i=0; i<5; i++)
    {
        scanf("%d", &valores[i]);

        if(valores[i] % 2 == 0){
            contador++;
        }
    }

    printf("%d valores pares\n", contador);
}