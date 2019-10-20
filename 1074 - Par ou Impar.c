#include <stdio.h>

int main()
{
    int N;
    int i;
    
    scanf("%d", &N);

    int valores[N];
    
    for (i=0; i < N; i++)
    {
        scanf("%d", &valores[i]);
    }
    

    for (i = 0; i < N; i++)
    {
        if(valores[i] % 2 == 0 && valores[i] > 0)
        {
            printf("EVEN POSITIVE\n");
        }

        if (valores[i] % 2 == 0 && valores[i] < 0)
        {
            printf("EVEN NEGATIVE\n");
        }

        if (valores[i]%2 == -1 && valores[i] < 0)
        {
            printf("ODD NEGATIVE\n");
        }

        else if (valores[i] % 2 == 1 && valores[i] > 0)
        {
            printf("ODD POSITIVE\n");
        }

        else if (valores[i] == 0)
        {
            printf("NULL\n");
        }
    }
    
}