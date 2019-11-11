#include <stdio.h>

int main()
{
    int n;
    int i, j; 
    float gd;
    double notas[7];
    char nome[50]; 
    int contador = 0;
    double menor;
    double soma = 0;

    scanf("%d", &n);

    while(contador < n)
    {
        //ZERAR SOMA PRA TODO O WHILE
        soma = 0;

        //RECEBENDO NOME
        scanf("%s", nome);

        //RECEBENDO GRAU DE DIFICULDADE
        scanf("%f", &gd);

        //RECEBENDO AS NOTAS
        for(i = 0; i < 7; i++)
        {
            scanf("%lf", &notas[i]);
        }

        //ORDENANDO AS NOTAS
        for(i = 0; i < 7; i++)
        {
            for(j = 0; j < 6; j++)
            {
                if(notas[j] > notas[j+1])
                {
                    menor = notas[j];
                    notas[j] = notas[j+1];
                    notas[j+1] = menor;
                }
            }
        }

        //DESCARTANDO A PRIMEIRA E ULTIMA NOTA 
        for(i = 1; i < 6; i++)
        {
            soma += notas[i];
        }

        //PRINTANDO NOTA FINAL 
        printf("%s %.2lf\n", nome, soma*gd);

        contador++;
    }

    return 0;
}