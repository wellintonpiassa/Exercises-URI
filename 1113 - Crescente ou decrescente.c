#include <stdio.h>

int main()
{
    int X = 1;
    int Y = 0;

    while(X != Y)
    {
        scanf("%d %d", &X, &Y);

        if(X > Y)
        {
            printf("Decrescente\n");
        }

        if (X < Y)
        {
            printf("Crescente\n");
        }
    }
}