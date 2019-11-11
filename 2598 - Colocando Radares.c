#include <stdio.h>
#include <math.h>

int main()
{
    unsigned c;
    float n, m;
    int contador = 0;

    scanf("%u", &c);

    while (contador < c)
    {
        scanf("%f %f", &n, &m);
        printf("%.f\n", ceil(n/m));   
        contador++;
    }
    return 0;
}