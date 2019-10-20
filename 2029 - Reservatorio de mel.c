#include <stdio.h>

int main()
{
    double V;
    double D;
    double A;
    double H;

    while (scanf("%lf %lf", &V, &D) != EOF)
    {
        H = V/(3.14 * ((D/2) * (D/2)));
        A = 3.14 * (D/2)* (D/2);
        
        printf("ALTURA = %.2lf\n", H);
        printf("AREA = %.2lf\n", A);
        
    }

    return 0;
}