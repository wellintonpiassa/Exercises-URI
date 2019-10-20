    #include <stdio.h>

    int main()
    {
        int numero = 97;
        int letra = 97;
        int i;

        for (i=0; i<26; i++)
        {
            printf("%d e %c\n", numero, letra);
            numero++;
            letra++;
        }

    }