#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int X;
    bool verificacao = true;
    int aux = -1;


    scanf("%d", &X);

    while(verificacao){
        if(aux < X-1){
            printf("%d\n", aux+=2);
        }
        else
            verificacao = false;
    }

    return 0;
}
