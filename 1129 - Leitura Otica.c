#include <stdio.h>

int main()
{
    int n = 1;
    int a, b, c, d, e;
    int contador = 0;

    while (n != 0)
    {
        scanf("%d", &n);
        contador = 0;

        while(contador < n)
        {
            scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

            if(a <= 127 && b > 127 && c > 127 && d > 127 && e > 127)
                printf("A\n");

            else if(a > 127 && b <= 127 && c > 127 && d > 127 && e > 127)
                printf("B\n");

            else if(a > 127 && b > 127 && c <= 127 && d > 127 && e > 127)
                printf("C\n");

            else if(a > 127 && b > 127 && c > 127 && d <= 127 && e > 127)
                printf("D\n");

            else if(a > 127 && b > 127 && c > 127 && d > 127 && e <= 127)
                printf("E\n");

            else
                printf("*\n");

            contador++;
        }
    }
}