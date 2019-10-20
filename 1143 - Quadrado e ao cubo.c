#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    int indice = 1;
    int cont1 = 0;
    int cont2 = 0;
    int elevado = 0;
    int vetor = 1;

    scanf("%d", &N);

    while (cont1 < N)
    {
        while (cont2 < 3)
        {
            indice = vetor; 
            elevado++;
            indice = pow(indice, elevado);
            if (cont2 == 2)
            {
                printf("%d\n", indice);
            }

            else
            {
                printf("%d ", indice);
            }
            cont2++;
        }

        vetor++;
        elevado = 0;
        cont2 = 0;
        cont1++;
        indice++;
    }
}