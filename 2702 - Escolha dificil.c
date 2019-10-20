#include <stdio.h>

int main()
{
    int Ca; //FRANGO
    int Ba; //BIFE
    int Pa; //MASSA

    int Cr; //FRANGO 
    int Br; //BIFE 
    int Pr; //MASSA

    int soma = 0;

    scanf("%d %d %d", &Ca, &Ba, &Pa);
    scanf("%d %d %d", &Cr, &Br, &Pr);

    if(Ca < Cr){
        soma += Cr - Ca;
    }

    if(Ba < Br){
        soma += Br - Ba;
    }

    if(Pa < Pr){
        soma += Pr - Pa;
    }

    printf("%d\n", soma);
}