#include <stdio.h>


int main()
{
    int x, i = 0,maior;

    while (scanf("%d", &x))
    {
        if(i==0)
            maior = x;
        if(x>maior)
            maior =x;
        if(x==0)
            break;
        i++;        
    }
    printf("%d\n", maior);


    return 0;
}