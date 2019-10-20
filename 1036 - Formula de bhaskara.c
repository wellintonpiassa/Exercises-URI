#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double A;
    double B;
    double C;
    double raiz_1;
    double raiz_2;
    double delta;

    scanf("%lf %lf %lf", &A, &B, &C);

    delta = B*B-4*A*C;

    if(delta < 0 || A == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        raiz_1 = (-B + sqrt(delta))/(2*A);
        raiz_2 = (-B - sqrt(delta))/(2*A);
        printf("R1 = %.5lf\n", raiz_1);
        printf("R2 = %.5lf\n", raiz_2);
    }
}