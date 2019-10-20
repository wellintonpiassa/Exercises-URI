#include <stdio.h>

int main()
{
    int L, V, maior, i;

    while (scanf("%d", &L)!=EOF)
    {
        maior =0;
        for(i=0; i<L; i++)
        {
            scanf("%d", &V);
            if(i==0)
                maior = V;
            if(V > maior)
                maior = V;
        }
    if(maior<10)
        printf("1\n");
    else if(maior >= 20)
        printf("3\n"); 
    else
       printf("2\n");
     
    }
}