#include <stdio.h>

int main()
{
    int n, c, i, ma, jo;
    while (1)
    { 
        ma = 0;
        jo = 0;
        scanf("%d", &n);
        if(n==0)
            break;
        for(i=0; i<n; i++)
        {

            scanf("%d", &c);
            if(c==0)
                ma++;
            else
                jo++;            
        }
    printf("Mary won %d times and John won %d times\n", ma, jo);
        }
    return 0;
}