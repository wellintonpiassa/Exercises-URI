#include <stdio.h>
#include <string.h>

int main()
{
    char S[102];
    int i = 0;
    int contador = 0;

    scanf("%s", S);
    
    while(S[i] != '\0')
    {
        if(S[i] == '1'){
            contador++;
        }

        i++;
    }

    if(contador % 2 != 0)
        strcat(S, "1");

    if(contador % 2 == 0)
        strcat(S, "0");

    printf("%s\n", S);

    return 0;   

}