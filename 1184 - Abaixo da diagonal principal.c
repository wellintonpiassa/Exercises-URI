#include <stdio.h>

int main()
{

    float M[12][12], soma=0, media=1;
    int i, y;
    char O[1];

    scanf("%s", &O[0]);
     for(i=0;i< 12;i++)
    {
        for(y=0; y<12; y++)
        {
        scanf("%f", &M[i][y]);
        if(i>y)
            media+= M[i][y];            
        }
    }
    if (O[0]=='M')
    {
        printf("%.1f\n", media / 66);
    }
    else
    { 
        printf("%.1f\n",media);
    }

    return 0;
}