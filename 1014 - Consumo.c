#include <stdio.h>

int main()
{
    int X; //Distância percorrida
    float Y; //Combustivel gasto
    float consumo; //Consumo médio;

    scanf("%d", &X);
    scanf("%f", &Y);

    consumo = X/Y;

    printf("%.3f km/l\n", consumo);

    return 0;

}