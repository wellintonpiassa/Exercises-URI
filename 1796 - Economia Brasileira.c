#include <stdio.h>

int main()
{
    int Q;
    int opiniao;
    int sim = 0;
    int nao = 0;
    int contador = 0;

    scanf("%d", &Q);
    
    while (contador < Q)
    {
        scanf("%d", &opiniao);

        if (opiniao == 1){
            nao++;
        }
        
        if (opiniao == 0){
            sim++;
        }
        
        contador++;
    }

    if (sim > nao)
        printf("Y\n");
    
    else
        printf("N\n");

    return 0;
}