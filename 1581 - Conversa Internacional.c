#include <stdio.h>
#include <string.h>

int main()
{
    int N, K, i;
    int contador1 = 0, contador3 = 0;
    
    scanf("%d", &N);

    while(contador1 < N)
    {
        scanf("%d", &K);
        contador3 = 0;
        char entrada[K][30];

        for(i = 0; i < K; i++)
        {
            scanf("%s", entrada[i]);
        }

        for(i = 0; i < K-1; i++)
        {
            if(strcmp(entrada[i], entrada[i+1]) != 0)
                contador3++;
        }

        if(contador3 == 0){
            printf("%s\n", entrada[0]);
        }

        else{
            printf("ingles\n");
        }

        contador1++;
    }

    return 0;
}