#include <stdio.h>

int main()
{
    int t, a, w, c;
    //t = tamanho total do disco
    //a = armazenamento utilizado no disco
    //w = porcentagem para warning
    //c = porcentagem para critical

    while(scanf("%d %d %d %d", &t, &a, &w, &c) != EOF)
    {
        if ((a*100)/t >= w && (a*100)/t < c)
            printf("warning\n");

        else if ((a*100)/t >= c)
            printf("critical\n");

        else
            printf("OK\n");
    }

    return 0;
}