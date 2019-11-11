#include <stdio.h>

int main()
{
    int n, m, i, j;
    int litros, sacos;

    while (scanf("%d %d", &n, &m)!= EOF)
    {
        int lavoura[n][m];
        litros = 0;
        sacos = 0;

        //PREENCHENDO VETOR
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                scanf("%d", &lavoura[i][j]);
            }
        }


        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                litros += lavoura[i][j];        
                 
                 if(litros >= 60)
                 {
                    litros = litros - 60;
                    sacos++;  
                 }
            }
        }

        printf("%d saca(s) e %d litro(s)\n", sacos, litros);
    }
    
    return 0;
}