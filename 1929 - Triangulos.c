#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C, D;

    scanf("%d %d %d %d", &A, &B, &C, &D);

    if (abs(B-C) < A && A < B+C && abs(A-C) < B && B < A+C && abs(A-B) < C && C < A+B) 
        printf("S\n");

    else if (abs(B-C) < D && D < B+C && abs(D-C) < B && B < D+C && abs(D-B) < C && C < D+B)
        printf("S\n");

    else if (abs(D-C) < A && A < D+C && abs(A-C) < D && D < A+C && abs(A-D) < C && C < A+D)
        printf("S\n");

    else if (abs(B-D) < A && A < B+D && abs(A-D) < B && B < A+D && abs(A-B) < D && D < A+B)
        printf("S\n");

    else 
        printf("N\n");

    return 0;

}