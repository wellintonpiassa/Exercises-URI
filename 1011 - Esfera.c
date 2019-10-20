#include <stdio.h>

int main()
{
    double raio;
    double area;

    scanf("%lf", &raio);

    area = (4.0/3)*3.14159*(raio*raio*raio);

    printf("VOLUME = %.3lf\n", area);

}