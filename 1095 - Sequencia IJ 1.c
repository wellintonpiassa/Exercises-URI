#include <stdio.h>

int main()
{
    int i = 1;
    int j = 60;
    int contador;


    while(j >=0)
    {
        printf("I=%d J=%d\n", i, j);
        i +=3;
        j -=5;
    }
}