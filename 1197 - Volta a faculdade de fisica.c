#include <stdio.h>

int main()
{
    int x, y, a;
    
    while (scanf("%d %d", &x, &y)!=EOF)
    {
        a = x * y * 2;
        printf("%d\n", a);
    }
    


    return 0;
}