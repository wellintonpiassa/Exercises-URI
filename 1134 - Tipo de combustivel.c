#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao = 0;
    int gasolina = 0;
    int alcool = 0;
    int diesel = 0;

    while(opcao!=4){
        scanf("%d",&opcao);

        switch(opcao){

            case 1:
                alcool++;
                break;
            case 2:
                gasolina++;
                break;
            case 3:
                diesel++;
                break;
            case 4:
                break;
            default:
                break;
        }
    }

    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",alcool,gasolina,diesel);

    return 0;
}
