#include <stdio.h>

int main()
{
    int N;
    int auxiliar = 1;
    int contador1 = 0;
    int contador2 = 0;

    scanf("%d", &N);

    while(contador1 < N)
    {
        while(contador2 < 1)
        {
            printf("%d %d %d PUM\n", auxiliar, auxiliar+1, auxiliar+2);
            auxiliar++;
            contador2++;
        }
        contador2 = 0;
        contador1++;
        auxiliar = auxiliar + 3;
    }
}