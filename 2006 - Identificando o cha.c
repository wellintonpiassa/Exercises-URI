#include <stdio.h>

int main()
{
    int T;
    int A, B, C, D, E;
    int somador = 0;
    
    
    scanf("%d", &T);

    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

    if (A == T)
        somador++;

    if (B == T)
        somador++;

    if (C == T)
        somador++;

    if (D == T)
        somador++;

    if (E == T)
        somador++;

    printf("%d\n", somador);
}