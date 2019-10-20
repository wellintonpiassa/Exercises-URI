#include <stdio.h>

int main()
{
    int N;
    int contador2 = 0;
    int contador3 = 0;
    int contador4 = 0;
    int contador5 = 0;
    int i;  

    scanf("%d", &N);

    int vetor[N];
    
    for (i=0; i< N; i++)
    {
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0)
            contador2++;

        if (vetor[i] % 3 == 0)
            contador3++;
        
        if (vetor[i] % 4 == 0)
            contador4++;

        if (vetor[i] % 5 == 0)
            contador5++;
    }

    printf("%d Multiplo(s) de 2\n", contador2);
    printf("%d Multiplo(s) de 3\n", contador3);
    printf("%d Multiplo(s) de 4\n", contador4);
    printf("%d Multiplo(s) de 5\n", contador5);
}