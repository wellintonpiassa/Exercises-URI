#include <stdio.h>

int main()
{
    long long  x, y, z;
    int i;
    scanf("%lld %lld", &x, &y);
        z = (x + y) * (y-x+1) / 2;
    printf("%lld\n",z);

    return 0;
}