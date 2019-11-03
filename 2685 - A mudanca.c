#include <stdio.h>

int main()
{
    int M;

    while(scanf("%d", &M) != EOF)
    {
        if (M >= 0 && M < 90 || M == 360)
            printf("Bom Dia!!\n");

        else if (M >= 90 && M < 180)
            printf("Boa Tarde!!\n");

        else if (M >= 180 && M < 270)
            printf("Boa Noite!!\n");

        else if (M >= 270 && M < 360)
            printf("De Madrugada!!\n");
    }

    return 0;
}