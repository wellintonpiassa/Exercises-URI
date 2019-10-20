#include <stdio.h>

int main()
{
    int v[3];
    int v2[3];
    int i;
    int aux;
    
    //RECEBENDO VALORES DO VETOR 1
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &v[i]);    
    }

    //COPIANDO OS VALORES PRO VETOR 2
    for (i = 0; i < 3; i++)
    {
        v2[i] = v[i];
    }

    //ORDENANDO OS VALORES DOS VETORES
    for (i = 0; i < 2; i++)
    {   
        if (v[i] > v[i+1])
        {
            aux = v[i+1];
            v[i+1] = v[i];
            v[i] = aux;
        }
    }

    for (i = 0; i < 1; i++)
    {   
        if (v[i] > v[i+1])
        {
            aux = v[i+1];
            v[i+1] = v[i];
            v[i] = aux;
        }
    }

    //PRINTANDO VALORES EM ORDEM
    for (i = 0; i < 3; i++)
    {
        printf("%d\n", v[i]);
    }

    //PRINTANDO ESPAÇO
    printf("\n");

    //PRINTANDO VALORES EM ORDEM DE RECEBIMENTO
    for (i = 0; i < 3; i++)
    {
        printf("%d\n", v2[i]);
    }
    
    
}