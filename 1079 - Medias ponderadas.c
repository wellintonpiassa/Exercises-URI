#include <stdio.h>

int main()
{
    int N;
    float media;
    int i;
    int cont = 0;

    scanf("%d", &N);

    float teste[3];

    while(cont < N)
    {
        for(i = 0; i < 3; i++)
            {
                scanf("%f", &teste[i]);

                if (i == 0)
                {
                    teste[i] = teste[i] * 2;
                }

                if (i == 1)
                {
                    teste[i] = teste[i] * 3;
                }

                if (i == 2)
                {
                    teste[i] = teste[i] * 5;
                }
            }

            media = (teste[0]+ teste[1] + teste[2])/10;
            printf("%.1f\n", media);
            cont++;    
    }

    return 0;   
}