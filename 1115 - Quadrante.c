#include <stdio.h>

int main()
{
    float x = 1;
    float y = 1;
    
    while (x != 0 && x != 0)
    {
        scanf("%f %f", &x, &y);

        if (x > 0 && y > 0)
        {
            printf("primeiro\n");
        }
        else if (x > 0 && y < 0)
        {
            printf("quarto\n");
        }
        else if (x < 0 && y < 0)
        {
            printf("terceiro\n");
        }
        else if (x < 0 && y > 0)
        {
            printf("segundo\n");
        }
    }
    
    return 0;
}