#include <stdio.h>

int main()
{
    int inter = 0;
    int gremio = 0;
    int opcao;
    int grenais = 0;
    int empates = 0;
    int vitoria_gremio = 0;
    int vitoria_inter = 0;

    do
    {
        scanf("%d %d", &inter, &gremio);
        gremio += gremio;
        inter += inter;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &opcao);
        grenais++;

        if (inter == gremio)
        {
            empates++;
        }

        if (inter > gremio)
        {
            vitoria_inter++;
        }

        if (gremio > inter)
        {
            vitoria_gremio++;
        }
        
    }while(opcao == 1);


    if(vitoria_inter > vitoria_gremio)
    {        
        printf("%d grenais\n", grenais);
        printf("Inter:%d\n", vitoria_inter);
        printf("Gremio:%d\n", vitoria_gremio);
        printf("Empates:%d\n", empates);
        printf("Inter venceu mais\n");
    }
    
    if(vitoria_inter < vitoria_gremio)
    {        
        printf("%d grenais\n", grenais);
        printf("Inter:%d\n", vitoria_inter);
        printf("Gremio:%d\n", vitoria_gremio);
        printf("Empates:%d\n", empates);
        printf("Gremio venceu mais\n");
    }

    if(vitoria_inter == vitoria_gremio)
    {        
        printf("%d grenais\n", grenais);
        printf("Inter:%d\n", vitoria_inter);
        printf("Gremio:%d\n", vitoria_gremio);
        printf("Empates:%d\n", empates);
        printf("Empate\n");
    }
    


}