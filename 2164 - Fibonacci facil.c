#include <stdio.h>
#include <math.h>
int main()

{
    double n, x, y, fib;
    scanf("%lf", &n);

    x = (1 + sqrt(5))/2.0;
    y = (1 - sqrt(5))/2.0;

    fib = (pow(x,n) - pow(y,n))/sqrt(5);

    printf("%.1lf\n", fib);
    return 0;
}