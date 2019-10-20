#include <stdio.h>

int main()
{
    int N[20];
    int auxiliar;
    int i;
    int j = 19;

    for ( i = 0; i < 20; i++)
    {
        scanf("%d", &N[i]);
    }

    for ( i = 0; i < 10; i++)
    {
        auxiliar = N[i]; 
        N[i] = N[j];
        N[j] = auxiliar;

        j--;
    }
    
    for ( i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, N[i]);
    }
    
    return 0;
}