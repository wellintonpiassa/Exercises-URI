#include <stdio.h>

int main()
{
    float numeros[6] = {0};
    int contador = 0;
    float media = 0;
    int i = 0;

    for (i = 0; i < 6; i++)
    {
        scanf("%f", &numeros[i]);
        
        if(numeros[i] > 0){
            contador++;
            media += numeros[i];
        }
    }

    media = media/contador;

    printf("%d valores positivos\n", contador);
    printf("%.1f\n", media);
}