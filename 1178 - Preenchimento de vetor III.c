#include <stdio.h>

int main()
{
    double N;
    double vet[100];
    int i;

    scanf("%lf", &N);

    vet[0] = N;

    for ( i = 1; i < 100; i++)
    {
        vet[i] = N/2;
        N = N/2;
    }
    
    for ( i = 0; i < 100; i++)
    {
        printf("N[%d] = %.4lf\n", i, vet[i]);
    }
    
}