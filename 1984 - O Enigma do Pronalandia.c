#include <stdio.h>
#include <string.h>

int main()
{
    char  num[25],temp;
    int i,j,x;

    scanf("%s", num);
    x = strlen(num);
    for(i=0, j=x-1; i<x/2; i++,j--)
    {
        temp = num[i];
        num[i]=num[j];
        num[j] = temp;      
    }       
    printf("%s\n", num);
}