#include <stdio.h>

int main()
{
    short n, m; //N É O NUMERO DE LINHAS E M O NUMERO DE COLUNAS
    unsigned short i, j;
    unsigned short detec1, detec2;

    scanf("%hu %hu", &n, &m);

    short matriz[n][m];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%hd", &matriz[i][j]);
        }
    }

    n--;
    m--;

    detec1 = detec2 = 0;

    for(i = 1; i < n; i++)
    {
        for(j = 1; j < m; j++)
        {
            if(matriz[i][j] == 42)
            {
                if(matriz[i-1][j-1] == 7 && matriz[i-1][j] == 7 && matriz[i-1][j+1] == 7
                    && matriz[i][j-1] == 7 && matriz[i][j+1] == 7 && matriz[i+1][j-1] == 7
                    && matriz[i+1][j] == 7 && matriz[i+1][j+1] == 7)
                    {
                        detec1 = i;
                        detec2 = j;
                        break;
                    }
                        
            }
        }
    }


    printf("%hu %hu\n", detec1, detec2);

    return 0;
}