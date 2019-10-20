#include <stdio.h>

int main()
{
    int a[9] = {0};
    int i;
    int somador = 0;
    int seletor = 0;

    for ( i = 0; i < 9; i++)
    {
        scanf("%d", &a[i]);
        somador += a[i];
    }

    for ( i = 0; i < somador; i++)
    {
        seletor++;

        if (seletor == 10)
            seletor = 1;
    }
    
    switch (seletor)
    {
    case 1:
        printf("Dasher\n");
        break;
    
    case 2:
        printf("Dancer\n");
        break;
    
    case 3:
        printf("Prancer\n");
        break;
        
    case 4:
        printf("Vixen\n");
        break;
    
    case 5:
        printf("Comet\n");
        break;

    case 6:
        printf("Cupid\n");
        break;

    case 7:
        printf("Donner\n");
        break;
    
    case 8:
        printf("Blitzen\n");
        break;
    
    case 9:
        printf("Rudolph\n");
        break;
    }

    return 0;    
}