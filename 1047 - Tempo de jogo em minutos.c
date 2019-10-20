#include <stdio.h>

int main()
{
    int hora_inicio;
    int hora_termino;
    int minuto_inicio;
    int minuto_termino;
    int tempo_horas;
    int tempo_minutos;

    scanf("%d %d %d %d", &hora_inicio, &minuto_inicio, &hora_termino, &minuto_termino);

    if(hora_termino == hora_inicio && minuto_inicio == minuto_termino){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
    {
        if (hora_inicio < hora_termino && minuto_inicio < minuto_termino)
        {
            tempo_horas = hora_termino - hora_inicio;
            tempo_minutos = minuto_termino - minuto_inicio;        
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempo_horas, tempo_minutos);
        }

        if (hora_inicio > hora_termino && minuto_inicio > minuto_termino)
        {
            tempo_horas = (24 + hora_termino) - hora_inicio;
            tempo_minutos = hora_termino - hora_inicio;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempo_horas, tempo_minutos);
        }        
        
        if (hora_inicio < hora_termino && minuto_inicio > minuto_termino)
        {
            tempo_minutos = 60 - (minuto_inicio - minuto_termino);
            tempo_horas = hora_termino - hora_inicio + minuto_termino - minuto_inicio;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempo_horas, tempo_minutos);
        }

        if (hora_inicio == hora_termino && minuto_inicio > minuto_termino)
        {
            tempo_minutos = 60 - (minuto_inicio - minuto_termino);
            tempo_horas = minuto_inicio - minuto_termino;
            tempo_horas = 24 - tempo_horas;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempo_horas, tempo_minutos);
        }

        if (hora_inicio == hora_termino && minuto_inicio < minuto_termino)
        {
            tempo_horas = 0;
            tempo_minutos = minuto_termino - minuto_inicio;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempo_horas, tempo_minutos);
        }

        if (hora_inicio < hora_termino && minuto_inicio == minuto_termino)
        {
            tempo_horas = hora_termino - hora_inicio;N
            tempo_minutos = 0;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempo_horas, tempo_minutos);
        }
    }
}




