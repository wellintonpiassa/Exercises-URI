#include <stdio.h>
#include <math.h>

int main()
{
    double a; //ANGULO CALCULADO
    double b; //DISTANCIA ENTRE O BAGULHO DE ANGULO E A ARVORE
    double c; //ALTURA DO ELFO MEDIDOR
    double m; 
    double pi = 3.141592654;
    
    while(scanf("%lf %lf %lf", &a, &b, &c) != EOF)
    {
        m = (b * tan((a * pi) / 180.0) + c) * 5;
        printf("%.2lf\n", m);
    }

    return 0;
    
}