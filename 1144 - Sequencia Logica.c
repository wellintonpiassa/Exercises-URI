#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int i;
    int j;

    scanf("%d", &N);

    for(i=1; i<=N; i++){
        j = i*i;
        printf("%d %d %d\n", i, j, i*j);
        printf("%d %d %d\n", i, j+1, i*j+1);
    }

    return 0;
}
