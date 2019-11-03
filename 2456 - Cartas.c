#include <stdio.h>

int main()
{
    int vetor[5];
    int i;
    int contador1 = 0, contador2 = 0, contador3 = 0;

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for(i = 1; i < 4; i++)
    {
        if (vetor[i] < vetor[i+1] && vetor[i-1] < vetor[i])
            contador1++;

        else if (vetor[i] > vetor[i+1] && vetor[i-1] > vetor[i])
            contador2++;

        else 
        {
            contador3 = 3;
            break;
        }
    }

    if (contador1 == 3)
        printf("C\n");

    else if (contador2 == 3)
        printf("D\n");

    else if (contador3 == 3)
        printf("N\n");

    return 0;
       
}