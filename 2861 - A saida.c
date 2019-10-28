#include <stdio.h>

int main()
{
    int C;
    char pergunta[50];
    int contador = 0;

    scanf("%d", &C);

    while(contador < C)
    {
        setbuf(stdin, NULL);
        fgets(pergunta, 50, stdin);
        printf("gzuz\n");
        contador++;
    }

    return 0;
}