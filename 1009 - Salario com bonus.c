#include <stdio.h>

int main()
{
    char nome[20];
    double salario_fixo;
    double total_vendas;
    double montante;

    scanf("%s", nome);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &total_vendas);
    
    montante = total_vendas * 0.15 + salario_fixo;

    printf("TOTAL = R$ %.2lf\n", montante);

    return 0;

}