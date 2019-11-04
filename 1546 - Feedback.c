#include <stdio.h>

int main()
{
    int N; //QUANTIDADE DE TESTE (DIAS)
    int K; //QUANTIDADE DE FEEDBACKS
    int contador1 = 0, contador2 = 0;
    int feed;

    scanf("%d", &N);

    while(contador1 < N)
    {
        scanf("%d", &K);
        contador2 = 0;

        while(contador2 < K)
        {
            scanf("%d", &feed);

            if (feed == 1)
                printf("Rolien\n");

            else if (feed == 2)
                printf("Naej\n");

            else if (feed == 3)
                printf("Elehcim\n");

            else if (feed == 4)
                printf("Odranoel\n");

            contador2++;
        }
        contador1++;
    }
    return 0;
}