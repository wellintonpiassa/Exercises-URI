#include <stdio.h>

int main()
{
    char nome[30];
    int i;
    for(i=0; i<10; i++)
    {
        scanf("%s", nome);
        fflush(stdin);
        if (i==2)
            printf("%s\n", nome);
        else if(i==6)
            printf("%s\n", nome);
        else if(i==8)
            printf("%s\n", nome);

    }



    return 0;
}