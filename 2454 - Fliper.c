#include <stdio.h>

int main()
{
    int p, r;

    scanf("%d %d", &p, &r);

    if(p == 1)
    {
        if (r == 0)
            printf("B\n");

        else if (r == 1)
            printf("A\n");
    }   

    else 
        printf("C\n");

    return 0;    
}