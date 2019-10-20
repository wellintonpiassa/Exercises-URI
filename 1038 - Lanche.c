#include <stdio.h>

int main()
{
    int codigo;
    int quantidade;
    float preco;

    scanf("%d %d", &codigo, &quantidade);

    if(codigo == 1){
        preco = quantidade * 4;
    }
    else if(codigo == 2){
        preco = quantidade * 4.50;
    }
    else if(codigo == 3){
        preco = quantidade * 5;
    }
    else if(codigo == 4){
        preco = quantidade * 2;
    }
    else if(codigo == 5){
        preco = quantidade * 1.50;
    }

    printf("Total: R$ %.2f\n", preco);
    
    return 0;
}