#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    if (N <= 10)
        printf("7\n");

    else if (N > 10 && N <= 30)
        printf("%d\n", 7 + ((N - 10) * 1));

    else if (N > 30 && N <= 100)
        printf("%d\n", 27 + ((N - 30) * 2));

    else if (N > 100)
        printf("%d\n", 167 + ((N - 100) * 5));

    return 0;
}