#include <stdio.h>

int main()
{
    int idade_em_dias;
    int anos;
    int meses;
    int dias;

    scanf("%d", &idade_em_dias);

    anos = idade_em_dias/365;
    idade_em_dias = idade_em_dias - anos*365;
    meses = idade_em_dias/30;
    idade_em_dias = idade_em_dias - meses*30;
    dias = idade_em_dias;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",anos,meses,dias);
}