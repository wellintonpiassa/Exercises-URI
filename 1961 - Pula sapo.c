#include <stdio.h>

int main()
{
    int P;
    int N;
    int i;
    int contador = 0;

    scanf("%d %d", &P, &N);

    int alturas[N];

    for(i = 0; i < N; i++)
    {
        scanf("%d",&alturas[i]);
    } 

    for(i = 0; i < N-1; i++)
    {
        if (alturas[i+1] - alturas[i] > P || alturas[i+1] - alturas[i] < -P)
        {
            contador++;
        }
        
    }

    if (contador > 0)
        printf("GAME OVER\n");

    else
        printf("YOU WIN\n");


    return 0;
}