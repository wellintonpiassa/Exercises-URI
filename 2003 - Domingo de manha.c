#include <stdio.h>

int main()
{
    int H;
    int min;

    while (scanf("%d %d", &H, &min) != EOF)
    {
        if (H+1 == 8)
        {
            printf("Atraso maximo: %d\n", min);
        }

        if (H + 1 < 8)
        {
            printf("Atraso maximo: 0\n");
        }

        if (H + 1 >8)
        {
            printf("%d", H* )
        }
        
    }
    
}