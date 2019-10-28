#include <stdio.h>

int main()
{
    int M = 0;
    int i = 0;
    int soma1 = 0, soma2 = 0;

    while(scanf("%d", &M) != EOF)
    {
        int nota[M];
        int carga[M];

        i = 0;
        soma1 = 0;
        soma2 = 0;

        while(i < M)
        {
            scanf("%d %d", &nota[i], &carga[i]);
            i++;
        } 

        i = 0;

        while(i < M)
        {
            soma1 += nota[i] * carga[i];
            i++;  
        }

        i = 0;

        while (i < M)
        {
            soma2 += carga[i];
            i++;
        }

        soma2 = soma2 * 100;

        printf("%.4lf\n", (double)soma1 / soma2);

    }

    return 0;
}