#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    int i;

    scanf("%d", &T);

    int R1[T];
    int R2[T];

    for(i=0; i<T; i++){
        scanf("%d %d", &R1[i], &R2[i]);
    }

    for(i=0; i<T; i++){
        printf("%d\n", R1[i]+R2[i]);
    }

    return 0;
}
