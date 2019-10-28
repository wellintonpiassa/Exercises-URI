#include <stdio.h>

int main()
{
    unsigned long long int P = 0;

    while (P != -1)
    {
        scanf("%llu", &P);

        if (P == -1)
            break;

        if(P > 0) 
            P --;

        else if (P == 0)
            P = 0;

        printf("%llu\n", P);

    }

    return 0;
}