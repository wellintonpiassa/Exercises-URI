#include <stdio.h>

int main()
{
    int i, amin, amax, n;
    int altura;
    int contador = 0;

    while(scanf("%d", &n) != EOF)
    {
        contador = 0;
        scanf("%d %d", &amin, &amax);

        for(i = 0; i < n; i++)
        {
            scanf("%d",&altura);
            if(altura >= amin && altura <= amax)
            contador++;
        }
        printf("%d\n",contador);
    }

    return 0;

}