#include <stdio.h>
#include <math.h>

int main()
{
    int A;
    int B;
    int C;
    int aux;
    int maior;

    scanf("%d %d %d", &A, &B, &C);

    if(A>B && A>C)
    {
        maior = A;
    }
    else if (C>B && C>A)
    {
        maior = C;
    }
    
    if(B>C && B>A){
        maior = B;
    }
    
    printf("%d eh o maior\n", maior);

    return 0;
}