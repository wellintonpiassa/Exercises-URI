#include <stdio.h>

int main()
{
    int a, b, c, d;
    int resp_cima, resp_baixo;
    int div = 2;
    int contador = 0;
    int sair = 0;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    resp_baixo = b * d;
    resp_cima = (d * a) + (b * c);

    while(div < resp_cima || div < resp_baixo)
    {
        while(sair == 0)
        {
            if((resp_cima % div) == 0 && (resp_baixo % div) == 0)
            {
                resp_cima = resp_cima / div;
                resp_baixo = resp_baixo / div;
            }

            else
                sair = 1;
            
        }
            div++;
            sair = 0;
    }

    printf("%d %d\n", resp_cima, resp_baixo);

    return 0;
}