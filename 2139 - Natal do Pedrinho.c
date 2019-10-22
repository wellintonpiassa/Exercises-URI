#include <stdio.h>

int main()
{
    int mes, dia, diferenca; 

    while (scanf("%d %d", &mes, &dia) != EOF)
    {

        if (dia > 25 && mes == 12)
            printf("Ja passou!\n");

        else if (dia == 24 && mes == 12)
            printf("E vespera de natal!\n");

        else if (dia == 25 && mes == 12)
            printf("E natal!\n");

        else if (dia < 24 && mes == 12){
            diferenca = 25 - dia;
            printf("Faltam %d dias para o natal!\n", diferenca);
        }

        else if (mes == 1){
            diferenca = (335 - dia) + 25;
            printf("Faltam %d dias para o natal!\n", diferenca);
        }

        else if (mes == 2){
            diferenca = (304 - dia) + 25;
            printf("Faltam %d dias para o natal!\n", diferenca);
        }
        
        else if (mes == 3){
            diferenca = (275 - dia) + 25;
            printf("Faltam %d dias para o natal!\n", diferenca);
        }

        else if (mes == 4){
            diferenca = (244 - dia) + 25;
            printf("Faltam %d dias para o natal!\n", diferenca);
        }

        else if (mes == 5){
            diferenca = (214 - dia) + 25;
            printf("Faltam %d dias para o natal!\n", diferenca);
        }

        else if (mes == 6){
            diferenca = (183 - dia) + 25;
            printf("Faltam %d dias para o natal!\n", diferenca);
        }

        else if (mes == 7){
            diferenca = (153 - dia) + 25;
            printf("Faltam %d dias para o natal!\n", diferenca);
        }

        else if (mes == 8){
            diferenca = (122 - dia) + 25;
            printf("Faltam %d dias para o natal!\n", diferenca);
        }

        else if (mes == 9){
            diferenca = (91 - dia) + 25;
            printf("Faltam %d dias para o natal!\n", diferenca);
        }

        else if (mes == 10){
            diferenca = (61 - dia) + 25;
            printf("Faltam %d dias para o natal!\n", diferenca);
        }

        else if (mes == 11){
            diferenca = (30 - dia) + 25;
            printf("Faltam %d dias para o natal!\n", diferenca);
        }
    }

    return 0; 

}