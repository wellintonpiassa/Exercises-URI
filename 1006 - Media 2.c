#include <stdio.h>

int main()
{
    double A;
    double B;
    double C;
    double media;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    media = (A*2 + B*3 + C*5)/10;

    printf("MEDIA = %.1lf\n", media);

    return 0;

}