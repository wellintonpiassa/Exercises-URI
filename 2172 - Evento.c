#include <stdio.h>

int main()
{
    unsigned long int X;
    unsigned long int M;

    scanf ("%ld %ld", &M, &X);

    while (M != 0 && X != 0)
    {
        printf("%ld\n", X*M);
        scanf ("%ld %ld", &M, &X);
    }

    return 0;
}