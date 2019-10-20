#include <stdio.h>

int main()
{
    int N; //Numero de casos
    int X; //Numeros a serem testados
    int cont_casos = 0; //Contador de casos
    int cont_divisores = 1; //Contador de numeros que vao ser os divisores
    int numero_divisores = 0; //Numero de numeros que vão ser divisores de X

    scanf("%d", &N); //Escaneando numero de casos

    while (cont_casos < N)
    {    
        scanf("%d", &X);

        while(cont_divisores <= X)
        {
            if (X % cont_divisores == 0)
            {
                numero_divisores++;
                //printf("%d", numero_divisores);
            }
            
            cont_divisores++;

        }

        cont_divisores = 1;

        if (numero_divisores == 2)
        {
            printf("%d eh primo\n", X);
        }

        if (numero_divisores != 2)
        {
            printf("%d nao eh primo\n", X);
        }

        cont_casos++;
        numero_divisores = 0;  
    }

    return 0;
    
}