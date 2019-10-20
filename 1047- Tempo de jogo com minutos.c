#include <stdio.h>

int main()
{
    int hora_inic;
    int min_inic;
    int hora_final;
    int min_final;
    int horas, minutos;

    scanf("%d %d %d %d", &hora_inic, &min_inic, &hora_final, &min_final);

    if (hora_inic < hora_final && min_inic == min_final)
    {
        horas = hora_final - hora_inic;
        minutos = 0;
    }

    else if (hora_inic > hora_final && min_inic == min_final)
    {
        horas = 24 - hora_inic + hora_final;
        minutos = 0;
    }

    else if (hora_inic < hora_final && min_inic < min_final)
    {
        horas = hora_final - hora_inic;
        minutos = min_final - min_inic;
    }

    else if (hora_inic < hora_final && min_inic > min_final)
    {
        horas = hora_final - hora_inic - 1;
        minutos = 60 + min_final - min_inic;
    }

    else if (hora_inic > hora_final && min_inic < min_final)
    {
        horas = 24 - hora_inic + hora_final;
        minutos = min_final - min_inic;
    }

    else if (hora_inic > hora_final && min_inic > min_final)
    {
        horas = 24 - hora_inic + hora_final -1;
        minutos = 60 + min_final - min_inic;
    }

    else if (hora_inic == hora_final && min_inic == min_final)
    {
        horas = 24;
        minutos = 0;
    }

    else if (hora_inic == hora_final && min_inic < min_final)
    {
        horas = 0;
        minutos = min_final -  min_inic;
    }

    else if (hora_inic == hora_final && min_inic > min_final)
    {
        horas = 23;
        minutos = 60 + min_final - min_inic;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

    return 0;
}