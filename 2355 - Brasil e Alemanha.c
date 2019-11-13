#include <stdio.h>
#include <math.h>

int main()
{
    double n;
    double media_alemanha;
    double media_brasil;

    scanf("%lf", &n);

    while(n != 0)
    {
        media_alemanha = ceil((7*n)/90.);
        media_brasil = floor(n/90.);

        printf("Brasil %.lf x Alemanha %.lf\n", media_brasil, media_alemanha);
        scanf("%lf", &n);
    }

    return 0;
}