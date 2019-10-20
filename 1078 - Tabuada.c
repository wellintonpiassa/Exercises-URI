#include <stdio.h>

int main()
{
    int N;
    int i;

    scanf("%d", &N);

    for(i=1; i<11; i++){
        printf("%d x %d = %d\n", i, N, i*N);
    }
}