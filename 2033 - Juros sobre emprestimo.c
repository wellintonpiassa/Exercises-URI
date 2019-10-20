#include <stdio.h>
#include <math.h>

int main()
{
    double C, I;
    int N;    
    double jsimples, jcomposto;

    while(scanf("%lf %lf %d", &C, &I, &N) != EOF){
        jsimples = C * I * N;
        jcomposto = C * (pow((1+I),N));

        printf("DIFERENCA DE VALOR = %.2lf\n", fabs(jcomposto - jsimples)- C);
        printf("JUROS SIMPLES = %.2lf\n", fabs(jsimples));
        printf("JUROS COMPOSTO = %.2lf\n", fabs(C - jcomposto));
    }

    return 0;
}