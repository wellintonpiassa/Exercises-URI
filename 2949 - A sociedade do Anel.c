#include <stdio.h>

int main()
{
    int N;
    int hobbit = 0;
    int humano = 0;
    int elfo = 0;
    int anao = 0;
    int mago = 0;
    char nome[20];
    char tipo;
    int contador = 0;

    scanf("%d", &N);
    
    while(contador < N)
    {
        scanf("%s %c", nome, &tipo);

        switch (tipo)
        {
            case 'X':
                hobbit++;
                contador++;
                break;
            
            case 'M':
                mago++;
                contador++;
                break;

            case 'H':
                humano++;
                contador++;
                break;

            case 'E':
                elfo++;
                contador++;
                break;

            case 'A':
                anao++;
                contador++;
                break; 
        }
    }    

    printf("%d Hobbit(s)\n", hobbit);
    printf("%d Humano(s)\n", humano);
    printf("%d Elfo(s)\n", elfo);
    printf("%d Anao(s)\n", anao);
    printf("%d Mago(s)\n", mago);


    return 0;
}