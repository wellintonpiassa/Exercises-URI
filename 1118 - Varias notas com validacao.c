#include <stdio.h>
int main()
{
    int c, op=1; 
    float nota, media=0;
    
    while(op!=2)
    {
    c =0;
    media =0;
        while (c!=2)
        {
            scanf("%f", &nota);
            if(nota>0 && nota<=10)
            {
                media += nota;
                c++;
            }
            else
                printf("nota invalida\n"); 
        }
        printf("media = %.2f\n", media/2);
        while (1)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &op);
            if(op==1 || op==2)
                break;
        }
    }    
    return 0;
}