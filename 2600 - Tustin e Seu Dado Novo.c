#include <stdio.h>

int main()
{
    int valores[6];
    int i, n, contador = 0;
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;

    scanf("%d", &n);

    while (contador < n)
    {
        a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;

        for(i = 0; i < 6; i++)
            scanf("%d", &valores[i]);

        for(i = 0; i < 6; i++)
        {
            if(valores[i] == 1)
                a++;
            
            else if(valores[i] == 2)
                b++;

            else if(valores[i] == 3)
                c++;

            else if(valores[i] == 4)
                d++;

            else if(valores[i] == 5)
                e++;

            else if(valores[i] == 6)
                f++;
        }

        if (a == 1 && b == 1 && c == 1 && d == 1 & e == 1 && f ==1)
        {
            if(valores[0] + valores[5] == 7 && valores[1] + valores[3] == 7 && valores[2] + valores[4] == 7)
                printf("SIM\n");

            else 
                printf("NAO\n");
        }

        else
            printf("NAO\n");

        contador++;
    }

    return 0;
}