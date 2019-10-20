#include <stdio.h>

int main()
{
    int num_funcionario;
    int num_hora;
    float valor_hora;
    float salario;

    scanf("%d", &num_funcionario);
    scanf("%d", &num_hora);
    scanf("%f", &valor_hora);

    salario = valor_hora*num_hora;

    printf("NUMBER = %d\n", num_funcionario);
    printf("SALARY = U$ %.2f\n", salario);

}