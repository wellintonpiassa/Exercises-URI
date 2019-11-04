#include <stdio.h>

int main()
{
    int N; //NUMERO DE DIAS
    int S; //SALDO NO INICIO DO PERIODO
    int montante = 0;
    int contador = 0;
    int X;
    int menor;

    scanf("%d %d", &N, &S);
    menor = S;
    montante = S;

    while(contador < N)
    {
        scanf("%d", &X);
        montante += X;
        
        if(montante < menor)
            menor = montante;

        contador++;
    }

    printf("%d\n", menor);

    return 0;
}