#include<stdio.h>

int main()
{
    int n, i, comp;
    while (scanf("%d", &n)!=EOF)
    {
        comp = 1;
        if (n==1)
            printf("0\n");
        else if (n==2)
            printf("1\n");
        else
        {
            for(i=1; i<n; i++)
            {
                comp*= 2;
                if(comp==n)
                    break;
        
            }   
        printf("%d\n", i);
        }
    }
    



    return 0;
}