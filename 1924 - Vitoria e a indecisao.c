#include <stdio.h>

int main()
{
    int casos;
    int contador = 0;
    char curso[100];

    scanf("%d", &casos);

    while (contador <= casos){
        fgets(curso, 100, stdin);
        contador++;
    }

    printf("Ciencia da Computacao\n");
}