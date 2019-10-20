#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    char raj[10];
    char sheldon[10];
    int contador = 0;

    scanf("%d", &T);

    while (contador < T)
    {

        scanf("%s %s", sheldon, raj);

        if (strcmp(sheldon, "tesoura")==0 && strcmp(raj, "papel")==0)
            printf("Caso #%d: Bazinga!\n", contador+1);
        
        else if (strcmp(sheldon, "papel")==0 && strcmp(raj, "tesoura")==0)
            printf("Caso #%d: Raj trapaceou!\n", contador+1);

        else if (strcmp(sheldon, "papel")==0 && strcmp(raj, "pedra")==0)
            printf("Caso #%d: Bazinga!\n", contador+1);

        else if (strcmp(sheldon, "pedra")==0 && strcmp(raj, "papel")==0)
            printf("Caso #%d: Raj trapaceou!\n", contador+1);

        else if (strcmp(sheldon, "pedra")==0 && strcmp(raj, "lagarto")==0)
            printf("Caso #%d: Bazinga!\n", contador+1);

        else if (strcmp(sheldon, "lagarto")==0 && strcmp(raj, "pedra")==0)
            printf("Caso #%d: Raj trapaceou!\n", contador+1);

        else if (strcmp(sheldon, "lagarto")==0 && strcmp(raj, "Spock")==0)
            printf("Caso #%d: Bazinga!\n", contador+1);

        else if (strcmp(sheldon, "Spock")==0 && strcmp(raj, "lagarto")==0)
            printf("Caso #%d: Raj trapaceou!\n", contador+1);       

        else if (strcmp(sheldon, "Spock")==0 && strcmp(raj, "tesoura")==0)
            printf("Caso #%d: Bazinga!\n", contador+1);

        else if (strcmp(sheldon, "tesoura")==0 && strcmp(raj, "Spock")==0)
            printf("Caso #%d: Raj trapaceou!\n", contador+1);       
 
        else if (strcmp(sheldon, "tesoura")==0 && strcmp(raj, "lagarto")==0)
            printf("Caso #%d: Bazinga!\n", contador+1);

        else if (strcmp(sheldon, "lagarto")==0 && strcmp(raj, "tesoura")==0)
            printf("Caso #%d: Raj trapaceou!\n", contador+1);

        else if (strcmp(sheldon, "lagarto")==0 && strcmp(raj, "papel")==0)
            printf("Caso #%d: Bazinga!\n", contador+1);

        else if (strcmp(sheldon, "papel")==0 && strcmp(raj, "lagarto")==0)
            printf("Caso #%d: Raj trapaceou!\n", contador+1);

        else if (strcmp(sheldon, "papel")==0 && strcmp(raj, "Spock")==0)
            printf("Caso #%d: Bazinga!\n", contador+1);

        else if (strcmp(sheldon, "Spock")==0 && strcmp(raj, "papel")==0)
            printf("Caso #%d: Raj trapaceou!\n", contador+1);

        else if (strcmp(sheldon, "Spock")==0 && strcmp(raj, "pedra")==0)
            printf("Caso #%d: Bazinga!\n", contador+1);

        else if (strcmp(sheldon, "pedra")==0 && strcmp(raj, "Spock")==0)
            printf("Caso #%d: Raj trapaceou!\n", contador+1);

        else if (strcmp(sheldon, "pedra")==0 && strcmp(raj, "tesoura")==0)
            printf("Caso #%d: Bazinga!\n", contador+1);

        else if (strcmp(sheldon, "tesoura")==0 && strcmp(raj, "pedra")==0)
            printf("Caso #%d: Raj trapaceou!\n", contador+1);

        else if (strcmp(sheldon, raj) == 0)
            printf("Caso #%d: De novo!\n", contador+1);
        

        contador++;
    }
    
}