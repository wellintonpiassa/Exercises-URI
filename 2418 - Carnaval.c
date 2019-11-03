#include <stdio.h>

int main()
{
    float notas[5] = {0};
    int i, j;
    float aux;

    for(i = 0; i < 5; i++)
    {
        scanf("%f", &notas[i]);
    }

    for(j = 0; j < 5; j++)
    {
        for(i = 0; i < 4; i++)
        {
            if (notas[i] < notas[i+1])
            {
                aux = notas[i];
                notas[i] = notas[i+1];
                notas[i+1] = aux;
            }
        }
    }

    aux = 0;
    
    for(j = 1; j < 4; j++)
        aux += notas[j];
        
        
    printf("%.1f\n", aux);

    return 0;
}