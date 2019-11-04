#include <stdio.h>

int main()
{
    char var1[101];
    char var2[101];
    char var3[101];
    int i;

    setbuf(stdin, NULL);
    scanf(" %[^\n]", var1);
    setbuf(stdin, NULL);
    scanf(" %[^\n]", var2);
    setbuf(stdin, NULL);
    scanf(" %[^\n]", var3);

    printf("%s%s%s\n", var1, var2, var3);
    printf("%s%s%s\n", var2, var3, var1);
    printf("%s%s%s\n", var3, var1, var2);

    i = 0;

    while(var1[i] != '\0' && i < 10)
    {
        printf("%c",var1[i]);
        i++;
    }

    i = 0;

    while(var2[i] != '\0' && i < 10)
    {
        printf("%c",var2[i]);
        i++;
    }

    i = 0;

    while(var3[i] != '\0' && i < 10)
    {
        printf("%c",var3[i]);
        i++;
    }

    printf("\n");
    
    return 0;
}