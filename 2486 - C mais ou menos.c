#include <stdio.h>
#include <string.h>

int main()
{
    int t, n;
    char alimento[30];
    int calorias = 0;
    int contador = 0;

    scanf("%d", &t);

    while(t != 0)
    {
        contador = 0;
        calorias = 0;

        while(contador < t)
        {
            scanf("%d %[^\n]", &n, alimento);

            if(strcmp(alimento, "suco de laranja") == 0)
                calorias += 120 * n;

            if(strcmp(alimento, "morango fresco") == 0)
                calorias += 85 * n;

            if(strcmp(alimento, "mamao") == 0)
                calorias += 85 * n;

            if(strcmp(alimento, "goiaba vermelha") == 0)
                calorias += 70 * n;

            if(strcmp(alimento, "manga") == 0)
                calorias += 56 * n;
            
            if(strcmp(alimento, "laranja") == 0)
                calorias += 50 * n;

            if(strcmp(alimento, "brocolis") == 0)
                calorias += 34 * n;

            contador++;
        }      

        if(calorias > 130)
            printf("Menos %d mg\n", calorias - 130);

        if (calorias < 110)
            printf("Mais %d mg\n", 110 - calorias);

        if (calorias >= 110 && calorias <= 130)
            printf("%d mg\n", calorias);

        scanf("%d", &t);
    }

    return 0;
}