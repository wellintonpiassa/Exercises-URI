#include <stdio.h>

int main()
{
    double A;
    double B;
    double MEDIA;

    scanf("%lf", &A);
    scanf("%lf", &B);

    MEDIA = (A*3.5 + B*7.5)/11;

    if(MEDIA > 10){
        MEDIA = 10;
    }

    printf("MEDIA = %.5lf\n", MEDIA);

    return  0;
}