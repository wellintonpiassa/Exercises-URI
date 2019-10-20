#include <stdio.h>

int main()
{
    double baixo = 2;
    double S = 1;
    double cima = 3;
    int contador = 0;

    while (cima <= 39)
    {
        S += cima/baixo;
        cima += 2;
        baixo = baixo * 2;
    }

    printf("%.2f\n", S);



}