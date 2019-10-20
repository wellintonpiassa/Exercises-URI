#include <stdio.h>


int main()
{
    int i, j, n, carlos, maior;

    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &j);
        if(i==0)
        {
            carlos = j;
            maior = j;
        }
        if(j> maior)
            maior= j;
    }
    if(carlos>=maior)
        printf("S\n");
    else
        printf("N\n");    
    

    return 0;
}