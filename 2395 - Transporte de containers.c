#include <stdio.h>

int main()
{
    int a, b, c; //DIMENSOES DO CONTAINER
    int x, y, z; //DIMENSÕES DO NAVIO

    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &x, &y, &z);

    if(a <= x && b <= y && c <= z)
    {
        a = x / a;
        b = y / b;
        c = z / c;

        a = a*b*c;

        printf("%d\n", a);
    }

    else 
    printf("0\n");

    return 0;

}