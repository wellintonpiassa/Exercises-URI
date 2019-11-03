#include <stdio.h>

int main()
{
    double x;
    int i;
    double N[100];

    scanf("%lf", &x);

    N[0] = x;

    for(i = 0; i < 99; i++)
    {
        N[i+1] = N[i] / 2;
    }

    for(i = 0; i < 100; i++)
    {
        printf("N[%d] = %.4lf\n", i, N[i]);
    }
    

    return 0;
}