#include <stdio.h>

int main()
{
    int tamanho = 100;
    float N[tamanho];
    int i;

    for(i=0; i<tamanho; i++)
    {    
        scanf("%f", &N[i]);
    }

    for(i=0; i<tamanho; i++)
    {    
        if(N[i] <= 10)
        {
            printf("A[%d] = %.1f\n", i, N[i]);
        }
    }
    
    
}