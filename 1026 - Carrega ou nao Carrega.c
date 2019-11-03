#include <stdio.h>

int main()
{
    unsigned long long int a, b;

    while(scanf("%llu %llu", &a, &b) != EOF)
    {
        printf("%llu\n", a^b);
    }

    return 0;
}