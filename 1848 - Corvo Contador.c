#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void flush_in(){ 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){} 
}

int main()
{
    char corvo[30];
    unsigned short int numero[3] = {0};
    unsigned short int contador = 0, i;
    
    while(contador < 3)
    {
        //setbuf(stdin, NULL);
        scanf(" %[^\n]", corvo);
        flush_in(); 
        //fgets(corvo, 30, stdin);
        
        if (strcmp(corvo, "--*") == 0)
            numero[contador] += 1;

        if (strcmp(corvo, "-*-") == 0)
            numero[contador] += 2;

        if (strcmp(corvo, "-**") == 0)
            numero[contador] += 3;

        if (strcmp(corvo, "*--") == 0)
            numero[contador] += 4;

        if (strcmp(corvo, "*-*") == 0)
            numero[contador] += 5;

        if (strcmp(corvo, "**-") == 0)
            numero[contador] += 6;

        if (strcmp(corvo, "***") == 0)
            numero[contador] += 7;

        if(strcmp(corvo, "caw caw") == 0)
            contador++;
    } 

    for (i = 0; i < 3; i++)
        printf("%hd\n", numero[i]);

    return 0;
}