#include <stdio.h>
#include <math.h>

int main()
{
    double X1;
    double Y1;
    double X2;
    double Y2;
    double distancia;

    scanf("%lf %lf", &X1, &Y1);
    scanf("%lf %lf", &X2, &Y2);

    distancia = ((X2-X1)*(X2-X1)) + ((Y2-Y1)*(Y2-Y1));

    distancia = sqrt(distancia);

    printf("%.4lf\n", distancia);

    return 0;
}