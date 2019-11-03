#include <stdio.h>

int main()
{
    char nome[50];
    double distancia = 0;
    double entrada;
    int contador = 1;

    while (scanf(" %[^\n] %lf", nome, &entrada) != EOF)
    {
        setbuf(stdin, NULL);
        distancia += entrada;
        contador++;
    }

    distancia = distancia / (float)contador;

    printf("%.1lf\n", distancia);

    return 0;
}