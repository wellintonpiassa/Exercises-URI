#include <stdio.h>
#include <string.h>

int main()
{
    char acao[10];
    int pessoas;
    char contador;
    int cont_jipe = 0;
    int cont_pessoas = 0;

    while (strcmp(acao, "ABEND") != 0)
    {
        scanf("%s %d", acao, &pessoas);

        if(strcmp(acao, "SALIDA") == 0){
            cont_jipe++;
            cont_pessoas += pessoas;
        }

        else if (strcmp(acao, "VUELTA") == 0){
            cont_jipe--;
            cont_pessoas -= pessoas;
        }
    
        scanf("%s %d", acao, &pessoas);
    }

    printf("%d\n", cont_pessoas);
    printf("%d\n", cont_jipe);
}