#include <stdio.h>

int main()
{
    double o, b, i;
    
    scanf("%lf %lf %lf", &o, &b, &i);

    //POSSIBILIDADES DE VITORIA DIRETA
    if (o < b && o < i)
        printf("Otavio\n");

    if (b < o && b < i)
        printf("Bruno\n");

    if (i < b && i < o)
        printf("Ian\n");

    
    //POSSIBILIDADES DE EMPATE
    if (o == b && o < i && b < i)
        printf("Empate\n");

    if (i == b && i < o && b < o)
        printf("Empate\n");

    if (i == o && i < b && o < b)
        printf("Empate\n");

    if (i == o && i == b && o == b)
        printf("Empate\n");

    
    return 0;

}