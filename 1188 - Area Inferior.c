#include <stdio.h>

#define TAM_DA_MATRIZ 4

int main()
{
    double matriz [TAM_DA_MATRIZ][TAM_DA_MATRIZ];
    int i;
    int j;
    char O;
    int decrescente = TAM_DA_MATRIZ;
    double valores = 0;
    int contador = 0;

    scanf("%c", &O);

    for(i = 0; i < TAM_DA_MATRIZ; i++)
    {
         for(j = 0; j < TAM_DA_MATRIZ; j++)
        {
            scanf("%lf", &matriz[i][j]);
        }
    }

    for(i = TAM_DA_MATRIZ - 1; i <= (TAM_DA_MATRIZ / 2) - 1; i--)
    {
        for(j = 1; j < decrescente; i++)
        {
            valores += matriz[i][j];
            contador++;
        }

        decrescente -= 2;
    }

    switch (O)
    {
    case 'S':
        printf("%lf\n", valores);
        break;

    case 'M':
        printf("%lf\n", valores/contador);
        break;
    
    default:
        break;
    }

    return 0;

}