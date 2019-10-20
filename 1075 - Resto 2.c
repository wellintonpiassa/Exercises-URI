#include <stdio.h>

int main()
{
    int N;
    int cont = 2;
    scanf("%d", &N);

    while(cont < 10000)
    {
        if(cont%N == 2)
        {
            printf("%d\n", cont);
        }
        
        cont++;
    }
}