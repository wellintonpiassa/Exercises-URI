#include <stdio.h>

int main()
{
    int i, j, n, dias;
    long int a, b; double an, bn, aa, bb; 

    scanf("%d", &n);
    for(i=0; i<n; i++)
        {
            scanf("%ld %ld %lf %lf", &a, &b, &an, &bn);
            dias = 0;
            an = an/100;
            bn = bn/100;
            while (1)
            {
                dias++;
                a += a * an;
                b += b * bn;
                if (a>b)
                    break;
                else if(dias >100)
                    break;
            }
            if (dias<=100)
                printf("%d anos.\n", dias);
            else
            {
                printf("Mais de 1 seculo.\n");
            }
        }
    return 0;
}