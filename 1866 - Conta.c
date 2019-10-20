#include <stdio.h>


int main()
{
    int n, x ,j ,i, S;

    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        S = 0;
        scanf("%d", &x);
        for(j=1; j<=x; j++)
        {
            if(j%2==0)
                S--;
            else
                S++;            
        }
        printf("%d\n", S);
    }
}