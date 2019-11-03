#include <stdio.h>
#include <string.h>

int main()
{
    char entrada1[25];
    char entrada2[25];
    char menor[25];
    int i;

    scanf("%s", entrada1);
    scanf("%s", entrada2);

    if (strcmp(entrada1, entrada2) < 0)
    {
        printf("%s\n", entrada1);
        printf("%s\n", entrada2);
    }

    else if(strcmp(entrada1, entrada2) > 0)
    {
        printf("%s\n", entrada2);
        printf("%s\n", entrada1);
    }

    else if(strcmp(entrada1, entrada2) == 0)
    {
        printf("%s\n", entrada1);
        printf("%s\n", entrada2);
    }
    
    return 0;

}