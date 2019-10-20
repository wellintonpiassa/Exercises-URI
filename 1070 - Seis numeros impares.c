#include <stdio.h>

int main()
{
    int X;
    int cont = 0;

    scanf("%d", &X);

    if(X % 2 == 1)
    {
        while (cont < 6)
        {
            printf("%d\n", X);
            X += 2;
            cont++;
        }    
    }

    else
    {
        X++;

        while (cont < 6)
        {    
            printf("%d\n", X);
            X += 2;
            cont++;
        }
    }
    
    
    
}