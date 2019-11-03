#include <stdio.h>

int main()
{
    int i, j;
    int flavinho[6];
    int sorteado[6];
    int contador = 0;

    for(i =0; i < 6; i++)
    {
        scanf("%d", &flavinho[i]);
    }

    for(i =0; i < 6; i++)
    {
        scanf("%d", &sorteado[i]);
    }

    for(i = 0; i < 6; i++)
    {
        for(j =0; j < 6; j++)
        {
            if (flavinho[i] == sorteado[j])
            {
                contador++; 
            }
        }
        
    }


    if (contador < 3)
        printf("azar\n");
    
    else if (contador == 3)
        printf("terno\n");

    else if (contador == 4)
        printf("quadra\n");

    else if (contador == 5)
        printf("quina\n");

    else if (contador == 6)
        printf("sena\n");

    return 0;

}
