#include <math.h>
#include <stdio.h>

int main()
{
    int x;
    int y;
    int resultado;
    int n;
    int contador = 0;
    int rafael;
    int beto;
    int carlos;

    scanf ("%d", &n);

    while (contador < n)
    {
        scanf("%d %d", &x, &y);

        rafael = ((pow(3*x, 2)) + (pow(y, 2)));
        beto = (2 * (pow(x, 2)) + (pow(5*y, 2)));
        carlos = (-100 * x + (pow(y, 3)));

        if (rafael > beto && rafael > carlos)
            printf("Rafael ganhou\n");

        if (beto > rafael && beto > carlos)
            printf("Beto ganhou\n");

        if (carlos > beto && carlos > rafael)
            printf("Carlos ganhou\n");

        contador++;
    }

    return 0;
}