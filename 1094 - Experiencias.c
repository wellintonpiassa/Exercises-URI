#include <stdio.h>

int main()
{
    int  n, qtd, i, tot=0;
    float coelho=0, rato=0, sapo=0;
    char cobaia;
    float perco, perrato, persap;
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d %c", &qtd, &cobaia);
        fflush(stdin);
        if(cobaia =='C')
            coelho+= qtd;
        else if (cobaia == 'R')
            rato+= qtd;
        else
            sapo+=qtd;       
        tot+= qtd;
    }
    perco = (coelho *100 /tot);
    perrato = (rato *100 /tot); 
    persap = (sapo *100 /tot);
    printf("Total: %d cobaias\n", tot);
    printf("Total de coelhos: %.0f\n", coelho);
    printf("Total de ratos: %.0f\n", rato);
    printf("Total de sapos: %.0f\n", sapo);
    printf("Percentual de coelhos: %.2f %%\n", perco);
    printf("Percentual de ratos: %.2f %%\n", perrato);
    printf("Percentual de sapos: %.2f %%\n", persap);
    return 0;
}