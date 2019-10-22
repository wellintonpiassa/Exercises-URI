#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, C;
    int maqt;

    while (A != 0 && B != 0 && C != 0)
    {
        scanf("%d %d %d", &A, &B, &C);
        
        if (A != 0 && B != 0 && C != 0)
        {
            maqt = A * B / (C/100.);
            maqt = sqrt(maqt);

            printf("%d\n", maqt);
        } 
    }

    return 0;
}