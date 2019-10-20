#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    int j = 7;

    while(i<=9){
        while(j>=5){
            printf("I=%d J=%d\n", i, j);
            j--;
        }

        i+=2;
        j=7;
    }

    return 0;
}
