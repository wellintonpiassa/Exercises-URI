#include <stdio.h>

int main()
{
    int H;
    int P;
    float resultado;

    scanf("%d %d", &H, &P);

    resultado = (float)H/P;

    printf("%.2f\n", resultado);

    return 0;
}