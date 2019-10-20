#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char f[128];
    while(gets(f))
    {
        for(i = 0; i < strlen(f); i++)
        {
            if(f[i] == ',')printf("\n");
            else printf("%c", f[i]);
        }
        printf("\n");
    }
    return 0;
}