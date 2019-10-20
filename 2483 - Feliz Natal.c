#include <stdio.h>
#include <string.h>

int main()
{
    int I;
    char mensagem[100000] = "Feliz nat";
    int i;
    int contador = 0;

    scanf("%d", &I);

    while (contador < I)
    {
        strcat(mensagem, "a");
        contador++; 
    }

    strcat(mensagem, "l!");


    printf("%s\n",mensagem);


    return 0;
}