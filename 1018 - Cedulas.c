#include <stdio.h>

int main()
{
    int N;
    int N1;
    int cedulas_100;
    int cedulas_50;
    int cedulas_20;
    int cedulas_10;
    int cedulas_5;
    int cedulas_2;
    int cedulas_1;

    scanf("%d", &N);

    N1 = N;

    cedulas_100 = N1/100;
    N1 = N1 - (cedulas_100*100);

    cedulas_50 = N1/50;
    N1 = N1 - (cedulas_50*50);

    cedulas_20 = N1/20;
    N1 = N1 - (cedulas_20*20);

    cedulas_10 = N1/10;
    N1 = N1 - (cedulas_10*10);

    cedulas_5 = N1/5;
    N1 = N1 - (cedulas_5*5);

    cedulas_2 = N1/2;
    N1 = N1 - (cedulas_2*2);

    cedulas_1 = N1/1;
    N1 = N1 - (cedulas_1*1);

    printf("%d\n",N);
    printf("%d nota(s) de R$ 100,00\n", cedulas_100);
    printf("%d nota(s) de R$ 50,00\n", cedulas_50);
    printf("%d nota(s) de R$ 20,00\n", cedulas_20);
    printf("%d nota(s) de R$ 10,00\n", cedulas_10);
    printf("%d nota(s) de R$ 5,00\n", cedulas_5);
    printf("%d nota(s) de R$ 2,00\n", cedulas_2);
    printf("%d nota(s) de R$ 1,00\n", cedulas_1);
}