#include <stdio.h>

int main()
{
    int valores[5] = {0};
    int i;
    int pares = 0;
    int impares = 0;
    int positivos = 0;
    int negativos = 0;

    for(i=0; i<5; i++){
        scanf("%d", &valores[i]);

        if(valores[i]%2 == 0) 
        {
            pares++;
        }

        if (valores[i] % 2 == 1 || valores[i] % 2 == -1)
        {
            impares++;
        }
        
        if (valores[i] > 0)
        {
            positivos++;
        }
        
        if (valores[i] < 0)
        {
            negativos++;
        }
    }

    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);
}