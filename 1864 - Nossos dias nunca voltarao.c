#include <stdio.h>

int main()
{
    char palavra[50] = {"LIFE IS NOT A PROBLEM TO BE SOLVED"};
    int contagem;
    int i;

    scanf("%d", &contagem);

    for (i = 0; i < contagem; i++)
    {
        printf("%c", palavra[i]);
    }

    printf("\n");

    return 0;
    
}