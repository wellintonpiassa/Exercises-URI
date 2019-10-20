#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    int N[1000];
    int i;
    int j = 0;

    scanf("%d", &T);

    for(i=0; i<1000; i++)
    {
        N[i] = j;
        j++;

        if(j==T)
            j=0;
    }

    for(i=0; i<1000; i++)
            printf("N[%d] = %d\n", i, N[i]);

    return 0;
}
