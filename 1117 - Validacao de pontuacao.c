#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    float nota[2];
    int i;
    bool sair = false;
    float media = 0;


        for(i=0; i<2; i++){
            scanf("%f", &nota[i]);
            sair = false;
            while(sair == false){
                if(nota[i]<0 || nota[i]>10){
                    printf("nota invalida\n");
                    scanf("%f", &nota[i]);
                }
                else
                    sair = true;
            }
    }

    for(i=0; i<2; i++){
        media += nota[i];
    }

    printf("media = %.2f\n", media/2);
}
