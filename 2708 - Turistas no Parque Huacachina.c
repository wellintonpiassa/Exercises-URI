#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[15];
    int t;
    int cont_jipe = 0, cont_pessoas = 0;

    scanf("%s %d", palavra, &t);

    while(strcmp(palavra, "ABEND") != 0)
    {
        if(strcmp(palavra, "SALIDA") == 0)
        {
            cont_jipe++;
            cont_pessoas += t;
        }

        if(strcmp(palavra, "VUELTA") == 0)
        {
            cont_jipe--;
            cont_pessoas -= t;
        }

        scanf("%s", palavra);
        
        if(strcmp(palavra, "ABEND") != 0)
            scanf("%d", &t);
    }

    printf("%d\n%d\n", cont_pessoas, cont_jipe);
    return 0;
}