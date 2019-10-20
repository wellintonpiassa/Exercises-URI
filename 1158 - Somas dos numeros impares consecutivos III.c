#include <stdio.h>
#include <stdlib.h>

int main()
{
    //VARIAVEL DO CASO DE TESTE
    int N;

    //RECEBENDO CASO DE TESTE
    scanf("%d", &N);

    //VARIAVEIS DO NUMERO DE TESTE
    int X[N];
    int Y[N];

    //VARIAVEIS DO FOR
    int i;
    int j;

    for(i=0; i<N; i++){
        scanf("%d %d", &X[i], &Y[i]);
    }

    //VARIAVEL DA SOMA FINAL DOS VALORES
    int soma[N];

    for(i=0; i<N; i++){
        soma[i] = 0;
    }

    //TRANSFORMANDO X EM ÍMPAR (CASO SEJA PAR)
    for(i=0; i<N; i++){
        if(X[i]%2 == 0){
            X[i] = X[i]+1;
        }
    }

    for(i=0; i<N; i++){
        for(j=0; j<Y[i]; j++){
            soma[i] += X[i];
            X[i]+=2;
        }
    }

    //PRINT DO RESULTADO FINAL
    for(i=0; i<N; i++)
        printf("%d\n", soma[i]);

    return 0;

}
