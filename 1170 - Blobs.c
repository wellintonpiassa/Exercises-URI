#include <stdio.h>

int main()
{

    int n, i, j, z;
    float x, y;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        z=0;
        scanf("%f", &x);
        while (1)
        {
            z++;
            y = x/2;
            x -= y;
            if (x<=1)
                break;
        }
        printf("%d dias\n", z);
    }

    return 0;
}