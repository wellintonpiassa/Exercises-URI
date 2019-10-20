#include <stdio.h>

int main()
{
    float salario = 0;
    float reajuste = 0;
    float percentual = 0;
    float porcentagem = 0;
    int porc_aumento;
    

    scanf("%f", &salario);

    if(salario >=0 && salario <= 400){
        porcentagem = 15;
        percentual = porcentagem/100;
        reajuste = (salario * percentual);
        salario = salario + reajuste;
    }

    else if(salario > 400 && salario <= 800){
        porcentagem = 12;
        percentual = (porcentagem/100);
        reajuste = (salario*percentual);
        salario = salario + reajuste;
    }

    else if(salario >800 && salario <= 1200){
        porcentagem = 10;
        percentual = porcentagem/100;
        reajuste = (salario*percentual);
        salario = salario + reajuste;
    }

    else if(salario > 1200 && salario <= 2000){
        porcentagem = 7;
        percentual = porcentagem/100;
        reajuste = (salario*percentual);
        salario = salario + reajuste;
    }
    else if (salario > 2000){
        porcentagem = 4;
        percentual = porcentagem/100;
        reajuste = (salario*percentual);
        salario = salario + reajuste;
    }

    porc_aumento = (int)porcentagem; 

    printf("Novo salario: %.2f\n", salario);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %d %%\n", porc_aumento);
    
}   
