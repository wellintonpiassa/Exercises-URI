#include <stdio.h>

int main()
{
    long int n, contador = 0, valor;
    double resposta = 1;
    char op;

    scanf("%ld", &n);

    while(contador < n)
    {
        scanf("%ld %c", &valor, &op);

        if(op == '*'){
            resposta = resposta * valor;
        }

        if (op == '/'){
            resposta = resposta / (float)valor;
        }
        contador++;
    }

    printf("%.0lf\n", resposta);

    return 0;
}