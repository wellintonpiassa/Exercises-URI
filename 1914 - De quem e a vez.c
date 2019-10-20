#include <stdio.h>
#include <string.h>

int main()
{
    int  QT, valor1, valor2, soma;
    char jogador1[20];
    char jogador2[20];
    char escolha1[6];
    char escolha2[6];
    
    scanf("%d", &QT);
    int contador = 0;

    while (contador < QT)
    {
        scanf("%s %s %s %s", jogador1, escolha1, jogador2, escolha2);
        scanf("%d %d", &valor1, &valor2);

        soma = valor1 + valor2;

        if (soma % 2 != 0)
        {
            if (strcmp(escolha1, "IMPAR") == 0)
            {
                printf("%s\n", jogador1);
            }

            else if (strcmp(escolha2, "IMPAR") == 0)
            {
                printf("%s\n", jogador2);
            }
            
        }

        if (soma % 2 == 0)
        {
            if (strcmp(escolha1, "PAR") == 0)
            {
                printf("%s\n", jogador1);
            }

            else if (strcmp(escolha2, "PAR") == 0)
            {
                printf("%s\n", jogador2);
            }
            
        }
        

        contador++;
    }
    
}