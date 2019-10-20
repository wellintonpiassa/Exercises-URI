#include <stdio.h>
#include <string.h>

int main()
{
    char pedra[10] = "pedra";
    char ataque[10] = "ataque";
    char papel[10] = "papel";
    int N;
    int contador = 0;
    char jogador1[10];
    char jogador2[10];

    scanf ("%d", &N);

    while (contador < N)
    {
        setbuf(stdin, NULL);

        scanf("%s", jogador1);
        scanf("%s", jogador2);

        if ((strcmp(jogador1, ataque) == 0) && (strcmp(jogador2, pedra) == 0))
            printf("Jogador 1 venceu\n");

        else if ((strcmp(jogador1, pedra) == 0) && (strcmp(jogador2, ataque) == 0))
            printf("Jogador 2 venceu\n");

        else if ((strcmp(jogador1, pedra) == 0) && (strcmp(jogador2, papel) == 0))
            printf("Jogador 1 venceu\n");

        else if ((strcmp(jogador1, papel) == 0) && (strcmp(jogador2, pedra) == 0))
            printf("Jogador 2 venceu\n");

        else if ((strcmp(jogador1, ataque) == 0) && (strcmp(jogador2, papel) == 0))
            printf("Jogador 1 venceu\n");
             
        else  if ((strcmp(jogador1, papel) == 0) && (strcmp(jogador2, ataque) == 0))
            printf("Jogador 2 venceu\n");

        else if ((strcmp(jogador1, papel) == 0) && (strcmp(jogador2, papel) == 0))
            printf("Ambos venceram\n");     

        else if ((strcmp(jogador1, pedra) == 0) && (strcmp(jogador2, pedra) == 0))
            printf("Sem ganhador\n");

        else if ((strcmp(jogador1, ataque) == 0) && (strcmp(jogador2, ataque) == 0))
            printf("Aniquilacao mutua\n");

        contador++;
    }
    
    return 0;
}