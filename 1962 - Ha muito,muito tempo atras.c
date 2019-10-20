#include <stdio.h>
#include <math.h>

int main()
{
    int A;
    int T;
    int casos;
    int contador = 0;

    scanf("%d", &casos);

    while (contador < casos)
    {
        scanf("%d", &A);
        T = 2015 - A;

        if (T > 0)
        {
            printf("%d D.C.\n", T);
        }

        if (T < 0)
        {
            T = fabs(2015 - A);
            printf("%d A.C.\n", T+1);
        }

        if (T == 0)
        {
            printf("1 A.C.\n");
        }

        contador++;
    }

}