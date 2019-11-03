#include <stdio.h>

int main()
{
    int C, N; //C É O NUMERO METROS QUE QUER CORRER E N É O COMPRIMENTO DA PISTA

    scanf("%d %d", &C, &N);

    printf("%d\n", C % N);

    return 0;
}