#include <stdio.h>
#include <string.h>

int main()
{
    int C;
    char letras[10000];
    float contador;
    int cont = 0;

    scanf("%d", &C);

    while (cont < C)
    {
        scanf("%s", letras);
        contador = strlen(letras);
        printf("%.2f\n", contador/100);
        cont++;
    }


}