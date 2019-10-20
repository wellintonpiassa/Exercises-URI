#include <stdio.h>


int main()
{
    double n,raiz = 0.0;

    scanf("%lf", &n);
    while(n--)
    {
        raiz+=6.0;
        raiz = 1/raiz;
    }
    raiz += 3.0;
    printf("%.10lf\n", raiz);
    return 0;
}