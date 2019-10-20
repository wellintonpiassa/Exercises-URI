#include <stdio.h>

int main()
{
    double A;
    double B;
    double X;

    scanf("%lf %lf", &A, &B);

    X = (B*100)/A;

    X = X - 100;

    printf("%.2lf%%\n", X);

}