#include <stdio.h>
#include <math.h>

int main()
{
    float i;
    float j;
    int l;
    int k;

        for(i=0; i <= 2.2; i += 0.2)
        {
            for (j = 1; j < 4; j++)
            {
                k = i/1;
                l = j/1;

                if (i - k*1 == 0 && j - l*1 == 0)
                    printf("I=%.0f J=%.0f\n", i, j+i);
                
                else if (i > 2)
                    printf("I=%.0f J=%.0f\n", i, j+i);

                else 
                    printf("I=%.1f J=%.1f\n", i, j+i);                    
            }
        }

    return 0;
}