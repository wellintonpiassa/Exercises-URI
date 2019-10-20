#include <stdio.h>
#include <math.h>

int main()
{
    double N;
    double notas[6] = {100, 50, 20, 10, 5, 2};
    int quant_notas[6] = {0};
    double moedas[6] = {1, 0.5, 0.25, 0.10, 0.05, 0.01};
    int quant_moedas[6] = {0};
    int i;

    scanf("%lf", &N);

    double valor = N;

    for(i=0; i<6; i++)
    {
        quant_notas[i] = valor/notas[i];
        valor = valor - (notas[i]*quant_notas[i]);
    }

    for(i=0; i<6; i++)
    {
        quant_moedas[i] = valor/moedas[i];
        valor = (valor - moedas[i] * quant_moedas[i]);
    }

    printf("NOTAS: \n");

    for(i=0; i<6; i++)
    {
        printf("%d nota(s) de R$ %lf.00\n", quant_notas[i], notas[i]);
    }

    printf("MOEDAS: \n");


    for(i=0; i<6; i++)
    {
        printf("%d moeda(s) de R$ %.2lf\n", quant_moedas[i], moedas[i]);
    }
    
    return 0;
}