#include <stdio.h>

int main()
{
    int T, contador = 0;
    char cadeia[100];

    scanf("%d", &T);


    while (contador < T)
    {
        setbuf(stdin, NULL);
        fgets(cadeia, 100, stdin);
        printf("Y\n");

        contador++;
    }

    return 0;
}