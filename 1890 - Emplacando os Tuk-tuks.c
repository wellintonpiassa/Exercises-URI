#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long int T, C, D;
    int contador = 0, i;
    unsigned long long int total = 0;

    scanf("%lld", &T);

    while (contador < T)
    {
        scanf("%lld %lld", &C, &D);

        if(C > 0 && D == 0)
            total = pow(26, C);
        
        else if (C == 0 && D > 0)
            total = pow(10, D);

        else if (C > 0 && D > 0)
        {
            total = 1;

            for(i = 0; i < C; i++){
                total = total * 26;
            }

            for(i = 0; i < D; i++){
                total = total * 10;
            }
        }

        else if (C == 0 && D == 0)
            total = 0;
            
        printf("%lld\n", total);

        contador++;
    }

    return 0;
}