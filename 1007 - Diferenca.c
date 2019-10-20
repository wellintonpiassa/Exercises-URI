#include <stdio.h>

int main()
{
    int A;
    int B;
    int C;
    int D;
    int resultado;

    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&D);
    
    resultado = (A*B - C*D);

    printf("DIFERENCA = %d\n", resultado);

    return 0;
}