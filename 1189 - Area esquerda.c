#include <stdio.h>

int main()
{
    double m[12][12];
    double somador = 0;
    char opcao;
    int i, j;

    scanf("%c", &opcao);

    for(i = 0; i < 12; i++)
        for(j = 0; j < 12; j++)
            scanf("%lf", &m[i][j]);

    switch (opcao)
    {
    case 'S':
        for(i = 0; i < 12; i++)
            for (j = 0; j < 12; j++)
                if (i > j && i+j <= 10)
                    somador += m[i][j];

        printf("%.1lf\n", somador);
        break;
    
    case 'M':
        for(i = 0; i < 12; i++)
            for (j = 0; j < 12; j++)
                if (i > j && i+j <= 10)
                    somador+=m[i][j];

        printf("%.1lf\n", somador / 30.);
        break;

    default:
        break;
    }

    return 0;
}