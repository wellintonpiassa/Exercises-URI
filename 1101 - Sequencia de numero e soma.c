#include <stdio.h>

int main()
{
    int M;
    int N;
    int cont;
    int soma = 0;

    scanf("%d %d", &M, &N);

    if(N != 0 && M !=0){
        if(N < M)
        {
            cont = N;

            while (cont <= M)
            {
                printf("%d ", cont);
                soma += cont;
                cont++;
            }
        printf("Sum=%d\n", soma);
        
        }


        else if (N > M)
        {
            cont = M;

            while (cont <= N)
            {
                printf("%d ", cont);
                soma += cont;
                cont++;
            }
            
            printf("Sum=%d\n", soma);
        }

        else if (N == M)
        {
            printf("%d ", N);
            printf("Sum=%d\n", N);
        }
    }
    
    return 0;
}