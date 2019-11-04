#include <stdio.h>

int main()
{
    int n, numa, numb, resultado;
    char letra;
    int contador = 0;

    scanf("%d", &n);

    while (contador < n)
    {
        scanf("%d%c%d", &numa, &letra, &numb);

        if(numa != numb)
        {
            if (letra >= 65 && letra <= 90)
                resultado = numb - numa;

            else if (letra >= 97 && letra <= 122)
                resultado = numa + numb;
       }

       else 
        resultado = numa * numb;
        
        printf("%d\n", resultado);
        contador++;
    }
    return 0;
}