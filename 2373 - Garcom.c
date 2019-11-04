#include <stdio.h>

int main()
{
    int n, l, c;
    int contador = 0;
    int somador = 0;

    scanf("%d", &n);

    while(contador < n)
    {
        scanf("%d %d", &l, &c);

        if(l > c)
        {
            somador += c;
        }

        contador++;
    }

    printf("%d\n", somador);

    return 0;
}
