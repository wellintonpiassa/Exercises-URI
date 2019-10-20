#include <stdio.h>
#include <math.h>
int main()

{
    double  n, x, y, fib;
    int i, c, T;
    scanf("%d", &c);
    for(i=0;i<c; i++)
    {
    scanf("%d", &T);
    n = T;
    x = (1 + sqrt(5))/2.0;
    y = (1 - sqrt(5))/2.0;

    fib = (pow(x,n) - pow(y,n))/sqrt(5);

    printf("Fib(%d) = %.0lf\n", T ,fib);
    }
    return 0;
}