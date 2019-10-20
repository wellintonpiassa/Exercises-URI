#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int contador = 0, contador2 = 0;
    int a, b, C, diferenca, resposta_usu, resposta;
    char operacao;

    scanf("%d", &C);

    while(contador < C)
    {
        setbuf(stdin, NULL);
        scanf("%d %c %d = %d", &a, &operacao, &b, &resposta_usu);

        if (operacao == '+')
        {
            resposta = a + b;
            diferenca = abs(resposta - resposta_usu);
        }

        else if (operacao == '-')
        {
            resposta = a - b;
            diferenca = (resposta - resposta_usu);
            diferenca = abs(diferenca);
        }

        else if (operacao == 'x')
        {
            resposta = a * b;
            diferenca = abs(resposta - resposta_usu);
        }
        
        contador2 = 0;

        printf("E");

        while(contador2 < diferenca)
        {
            printf("r");
            contador2++;
        }

        printf("ou!\n");

        contador++;
    }

    return 0;
}