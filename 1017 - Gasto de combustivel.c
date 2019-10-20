#include <stdio.h>

int main()
{
    //TEMPO GASTO NA VIAGEM EM HORAS
    float tempo;
    
    //VELOCIDADE MEDIA 
    float vel_media;

    double combustivel;

    scanf("%f", &tempo);
    scanf("%f", &vel_media);

    combustivel = (vel_media * tempo)/12;

    printf("%.3lf\n", combustivel);

    return 0;
}