#include <stdio.h>

int main()
{
    float salario;
    float imp1 = 0, imp2 = 0, imp3 = 0;
    float impostos;
    scanf("%f", &salario);

    if(salario <= 2000)
    {
        printf("Isento\n");
    }

    else
    {
        if (salario > 2000 && salario <= 3000)
        {
            salario = salario - 2000;
            imp1 = salario * 0.08;
            impostos = imp1;
        }

        if (salario > 3000 && salario <= 4500)
        {
            salario = salario - 3000;
            imp1 = 1000 * 0.08;
            imp2 = salario * 0.18;
            impostos = imp1 + imp2; 
        }

        if (salario > 4500)
        {
            salario = salario - 4500;
            imp1 = 1000 * 0.08;
            imp2 = 1500 * 0.18;
            imp3 = salario * 0.28;
            impostos = imp1 + imp2 + imp3;
        }

        printf("R$ %.2f\n", impostos);   
    }    

}