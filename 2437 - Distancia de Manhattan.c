#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, y1, x2, y2;
    int total;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    total = abs(x1-x2) + abs(y1-y2);

    printf("%d\n", total);

    return 0; 

}