#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    unsigned short numero, raiz, i, j;
    unsigned char primo;

    scanf ("%hd", &numero);

    for (i = 0; i < numero; i++)
    {
        primo = 1;

        scanf ("%d", &x);

        raiz = (int)sqrt(x);

        if (x != 2  && x % 2 == 0 || x == 1)
            primo = 0;

        for (j = 3; primo == 1 && j <= raiz; j += 2)
            if (x % j == 0)
            primo = 0;

        if (primo)
            printf ("Prime\n");
        else
            printf("Not Prime\n");
    }

    return 0;
}