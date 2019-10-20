#include <stdio.h>

int main()
{
    int L;
    int C;
    int P1;
    int P2;

    scanf("%d", &L);
    scanf("%d", &C);

    P2 = (C-1)*2 + (L-1)*2;
    P1 = L*C + ((L+C)/2)*2;

    printf("%d\n", P1);
    printf("%d\n", P2); 


    

}