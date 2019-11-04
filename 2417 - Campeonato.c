#include <stdio.h>

int main()
{
    int vit_C, emp_C, sal_C;
    int vit_F, emp_F, sal_F;
    int res_C, res_F;

    scanf("%d %d %d %d %d %d", &vit_C, &emp_C, &sal_C, &vit_F, &emp_F, &sal_F);

    res_C = (3*vit_C) + emp_C;
    res_F = (3*vit_F) + emp_F;

    if (res_C > res_F)
    {
        printf("C\n");
    }

    else if (res_C < res_F)
    {
        printf("F\n");
    }

    else if (res_C == res_F)
    {
        if (sal_C > sal_F)
        {
            printf("C\n");
        }

        else if(sal_F > sal_C)
        {
            printf("F\n");
        }

        else if (sal_C == sal_F)
        {
            printf("=\n");
        }
    }

    return 0;
}