#include <stdio.h>

int main()
{
    char alfabeto[50];  //ALFABETO A SER SEGUIDO 
    int N;  //NUMERO DE LAMAPADA QUE PISCARAM
    int i;
    int testes = 0;

    while(scanf("%d", &testes) != EOF)
    {
        scanf("%s", alfabeto);
        scanf("%d", &N);

        int L[N];

        for(i = 0; i < N; i++)
        {
            scanf("%d", &L[i]);
        }

        for(i = 0; i<N; i++)
        {
            printf("%c", alfabeto[L[i]-1]);

            if (i == N - 1)
            {
                printf("\n");
            }
            
        }
    }

    return 0;
}