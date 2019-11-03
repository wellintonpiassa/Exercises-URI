#include <stdio.h>

int main()
{
    int t, n, m, i;

    scanf("%d", &t);

    while (t--)
    {

        scanf("%d %d", &n, &m);

        unsigned short viagens = 1;
        unsigned short peso, soma = 0;
        
        for (i = 0; i < n; ++i)
        {

            scanf("%hd", &peso);
            soma += peso;
            if (soma > m)
                ++viagens, soma = peso;

        }
        printf("%d\n", viagens);
    }
    return 0;
}