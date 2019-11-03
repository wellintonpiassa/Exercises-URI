#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    int diferenca;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    diferenca = abs(abs(a-b) - abs(c - d));

    printf("%d\n", diferenca);


    return 0;

}