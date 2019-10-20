#include <stdio.h>

int main()
{
    double baixo = 2.0;
    double S = 1.0; 
    int i;

    for (i = 1; i < 100; i++)
    {
        S = S + (1/baixo);
        baixo++;    
    }

    printf("%.2lf\n", S);
}