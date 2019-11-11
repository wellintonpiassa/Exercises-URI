#include <stdio.h>

int main()
{
    double p, t, resposta;

    scanf("%lf %lf", &p, &t);

    resposta = (p * t) / 2;

    printf("Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = %.5lf.\n", resposta);

    return 0;
}