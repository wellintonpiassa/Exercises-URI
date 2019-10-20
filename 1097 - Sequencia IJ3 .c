#include <stdio.h>

int main()
{
    int i;
    int j;
    int aux = 2;

    for(i=1; i<=9; i+=2){
        aux = aux + 5; 
        for(j=0; j<3; j++){
            printf("I=%d J=%d\n", i, aux);
            aux--;
        }
    }
    return 0;
}