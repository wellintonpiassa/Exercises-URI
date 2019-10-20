#include <stdio.h>

int main()
{
    int n, par[5], impar[5], imp=0, pa=0, i=0, j;

    while (i<15)
    {
        scanf("%d", &n);
        if(n % 2 == 0)//Verifica se é par
        {
            par[pa] = n;
            pa++;
        }
        else if (n % 2 ==1 || -n % 2 ==1)//verifica se é impar
        {
            //printf("Impar[%d] %d\n", imp, impar[imp]);
            impar[imp] = n;
            imp++;
        } 
        if(pa == 5)//Se chegar a 5 pares irá printar
        {
            for(j=0; j<pa; j++)
                printf("par[%d] = %d\n", j ,par[j]);
                pa = 0;
        }
        else if(imp ==5)//Se chegar a 5 impares irá printar
        {
            for(j=0; j<imp; j++)
                printf("impar[%d] = %d\n", j, impar[j]);
                imp = 0;
        }
        i++;
    }
    if(imp > 0)
        for(j=0; j<imp; j++)
            printf("impar[%d] = %d\n", j ,impar[j]);
    if(par > 0)
        for(j=0; j<pa; j++)       
        printf("par[%d] = %d\n", j ,par[j]);
    return 0;
}