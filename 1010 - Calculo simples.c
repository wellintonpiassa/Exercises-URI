#include <stdio.h>

int main()
{
    int codigo_1;
    int codigo_2;
    int num_pecas1;
    int num_pecas2;
    float valor_unit1;
    float valor_unit2;
    float soma;


    scanf("%d %d %f", &codigo_1, &num_pecas1, &valor_unit1);
    scanf("%d %d %f", &codigo_2, &num_pecas2, &valor_unit2);

    soma = valor_unit1*num_pecas1 + valor_unit2*num_pecas2;

    printf("VALOR A PAGAR: R$ %.2f\n", soma);


}