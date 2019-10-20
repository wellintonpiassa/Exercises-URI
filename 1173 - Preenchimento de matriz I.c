#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N[10] = {0};
    int V;
    int i;

    //NUMERO DE ENTRADA
    scanf("%d",&V);

    //PREENCHENDO VETOR
    for(i=0; i<10; i++){
        N[i] = V;
        V = 2*V;
    }

    //PRINTANDO VALORES DO VETOR
    for(i=0; i<10; i++){
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
