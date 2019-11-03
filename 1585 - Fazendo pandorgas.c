#include <stdio.h>

int main()
{
    int n, x, y;
    int contador = 0;

    scanf("%d", &n);

    while(contador < n)
    {
        scanf("%d %d", &x, &y);
        printf("%d cm2\n", (x*y)/2);
        contador++;
    }

    return 0;
}