#include <stdio.h>

int main()
{
    int n, maior, i, c;

    scanf("%d", &n);

    for(i=0; i<n;i++)
    {
        scanf("%d", &c);
        if (i ==0)
            maior = c;
        else if(c > maior)
            maior = c;
    }

    maior++;
    printf("%d\n", maior);

    return 0;
}