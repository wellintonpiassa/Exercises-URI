#include <stdio.h>

int main()
{
    char pergunta[200];
    int N;
    int cont = 0;

    scanf("%d", &N);

    while(cont <= N){
        fgets(pergunta, 200, stdin);
        cont++;
    }

    cont = 0;

    while(cont < N){
        printf("I am Toorg!\n");
        cont++;
    }
    return 0;
}
