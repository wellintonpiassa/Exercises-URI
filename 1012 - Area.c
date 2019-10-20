#include <stdio.h>

int main()
{
    double A;
    double B;
    double C;

    scanf("%lf %lf %lf", &A, &B, &C);

    //AREA DO TRIÂNGULO
    double area_triangulo;
    area_triangulo = (A*C)/2;

    //AREA DO CIRCULO
    double area_circulo;
    area_circulo = 3.14159 * (C*C);

    //AREA DO TRAPEZIO
    double area_trapezio;
    area_trapezio = ((A+B)*C)/2;

    //AREA DO QUADRADO
    double area_quadrado;
    area_quadrado = B*B;

    //AREA DO RETANGULO
    double area_retangulo;
    area_retangulo = A*B;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", area_triangulo, area_circulo, area_trapezio,area_quadrado, area_retangulo);
    
}   