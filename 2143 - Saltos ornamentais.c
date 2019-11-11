#include <stdio.h>

int main()
{
    int t, n;
    int contador = 0;

    scanf("%d", &t);

    while (t != 0)
    {
        contador = 0;
        while (contador < t)
        {
        
            scanf("%d", &n);

            if(n % 2 == 0)
                printf("%d\n", (n*2)-2);

            else if (n % 2 == 1)
                printf("%d\n", (n*2)-1);
    
            contador++;
        }
        scanf("%d", &t);
    }

    return 0;
    
}