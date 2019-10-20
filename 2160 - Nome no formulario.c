#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[500];
    int tamanho;

    scanf("%[^\n]s", nome);
    tamanho = strlen(nome);
    if (tamanho<=80)
        printf("YES\n");
    else
        printf("NO\n");
}