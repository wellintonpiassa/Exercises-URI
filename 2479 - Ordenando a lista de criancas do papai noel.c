#include <stdio.h>
#include <string.h>

int main()
{
    unsigned short n;
    unsigned short count_bad = 0;
    unsigned short count_good = 0;
    int count = 0;
    char symbol;
    int i, j;
    char menor[25];

    scanf("%hu", &n);

    char name[n][25];

    while (count < n)
    {
        //setbuf(stdin, NULL);
        scanf(" %c %s", &symbol, name[count]);

        if(symbol == '+')
            count_good++;

        else if (symbol == '-')
            count_bad++;

        count++;
    }

    for(i = 0; i < n; i++)
        for(j = 0; j < n-1; j++)
        {
            if(strcmp(name[j], name[j+1]) > 0)
            {
                strcpy(menor, name[j]);
                strcpy(name[j], name[j+1]);
                strcpy(name[j+1], menor);
            }
        }

    for (i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }

    printf("Se comportaram: %d | Nao se comportaram: %d\n", count_good, count_bad);

    return 0;
}