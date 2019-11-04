#include <stdio.h>

int main()
{
    int n, a, b;
    int contador = 0;
    int resposta = 0;

    scanf("%d", &n);

    while (contador < n)
    {
        scanf("%d %d", &a, &b);
        resposta += a*b;
        contador++;
    }

    printf("%d\n", resposta);

    return 0;
}