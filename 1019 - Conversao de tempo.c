#include <stdio.h>

int main()
{
    //TEMPO EM SEGUNDOS DE UM EVENTO DA FABRICA
    int N;
    int horas = 0;
    int minutos = 0;
    int segundos = 0;

    scanf("%d", &N);

    horas = N/3600;
    minutos = (N%3600)/60;
    segundos = N - horas*3600 - minutos*60;


    printf("%d:%d:%d\n", horas, minutos, segundos);
}