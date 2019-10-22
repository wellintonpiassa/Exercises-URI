#include <stdio.h>

int main()
{
    int H;
    int M;
    
    while(scanf("%d:%d", &H, &M) != EOF)
    {
        if (H == 7)
            printf("Atraso maximo: %d\n", M);

        else if (H == 8)
            printf("Atraso maximo: %d\n", 60 + M);

        else if (H == 9)
            printf("Atraso maximo: 120\n");

        else if (H < 7)
            printf("Atraso maximo: 0\n");
    }

    return 0;
}