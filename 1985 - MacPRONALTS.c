#include <stdio.h>

int main()
{
    int quant = 0;
    int codigo = 0;
    float preco = 0;
    int contador = 0;
    int teste;

    scanf("%d", &teste);

    while(contador < teste)
    {
        scanf("%d %d", &codigo, &quant);

        if(codigo == 1001)
            preco += 1.50*quant;

        if(codigo == 1002)
            preco += 2.50*quant;
        
        if(codigo == 1003)
            preco += 3.50*quant;
        
        if(codigo == 1004)
            preco += 4.50*quant;
        
        if(codigo == 1005)
            preco += 5.50*quant;

        contador++;
    }

    printf("%.2f\n", preco);
}