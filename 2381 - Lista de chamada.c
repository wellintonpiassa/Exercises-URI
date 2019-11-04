#include <stdio.h>
#include <string.h>

int main()
{
    int n, k, i, j;
    
    scanf("%d %d", &n, &k);
    
    char alunos[n][25];
    char menor[25];

    for (i = 0; i < n; i++)
    {
        scanf("%s", alunos[i]);
    }

    for(j = 0; j < n; j++)
    {
        for(i = 0; i < n-1; i++)
        {
            if (strcmp (alunos[i], alunos[i+1]) > 0)
            {   
                strcpy(menor, alunos[i]);
                strcpy(alunos[i], alunos[i+1]);
                strcpy(alunos[i+1], menor);
            }
        }
    }

    printf("%s\n", alunos[k-1]);

    return 0;
}