#include <stdio.h>

int main()
{
    unsigned x, y, m;
    unsigned a, b, i;

    while(scanf("%u %u %u", &x, &y, &m) != EOF)
    {
        for (i = 0; i < m; i++)
		{
            scanf("%u %u", &a, &b);

            if ((a <= x && b <= y) || (a <= y && b <= x))
                printf("Sim\n");

            else 
                printf("Nao\n");
        }
    }
    
    return 0;
}