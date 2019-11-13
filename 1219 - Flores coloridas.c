#include <stdio.h>
#include <math.h>

double area_do_triangulo(double a, double b, double c)
{
    double area, p;
    p = ((a + b + c) / 2);
    area = sqrt(p*(p-a)*(p-b)*(p-c));
    return area;
}

double area_circulo_circunscrito(double a, double b, double c)
{
    double area;
    area = ((a * b * c) / sqrt((a + b + c) * (b + c - a) * (c + a - b) * (a + b - c)));
    area = M_PI * pow(area, 2);
    return area;
}

double area_circulo_inscrito(double a, double b, double c)
{
    double area;
    double p;
    p = ((a + b + c) / 2);

    //Encontrando o raio do circulo inscrito
    area = p;
    area = (p - a) * (p - b) * (p - c);
    area = area * p;
    area = sqrt(area);
    area = area / p;

    //Encontrando a area do circulo inscrito
    area = M_PI * pow(area,2);
    return area; 
}

int main()
{
    double a, b, c;
    double triangulo, circ_circuns, circ_insc;

    while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
    {
        circ_insc = area_circulo_inscrito(a,b,c);
        triangulo = area_do_triangulo(a, b, c) - circ_insc;
        circ_circuns =  area_circulo_circunscrito(a, b, c) - area_do_triangulo(a,b,c);

        printf("%.4lf %.4lf %.4lf\n", circ_circuns, triangulo, circ_insc);
    } 
    return 0;
}