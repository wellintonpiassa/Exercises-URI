#include <stdio.h>
#include <string.h>

int main()
{
    int N = 0;
    int M = 0;
    int cont = 0;
    char acao[6];

    scanf("%d %d", &N, &M);

    while (cont<M)
    {   
        scanf("%s", acao);

        if (!strcmp(acao, "fechou")){
                N++;
            } 
        
        if(!strcmp(acao, "clicou")){
            N--;
        }

        cont++;
    }

    printf("%d\n", N);

    return 0;
}