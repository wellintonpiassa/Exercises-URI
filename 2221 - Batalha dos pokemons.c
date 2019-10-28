#include <stdio.h>

int main()
{
    int T, B, Ai, Di, Li, Vi, Vj;
    int contador = 0;

    scanf("%d", &T);

    while(contador < T)
    {
        scanf("%d", &B);
        scanf("%d %d %d", &Ai, &Di, &Li);

        if (Li % 2 == 0){
            Vi = ((Ai + Di) / 2) + B;
        }    
        
        if (Li % 2 != 0){
            Vi = ((Ai + Di) / 2);
        }

        scanf("%d %d %d", &Ai, &Di, &Li);

        if (Li % 2 == 0){
            Vj = ((Ai + Di) / 2) + B;
        }
        
        if ( Li % 2 != 0){
            Vj = ((Ai + Di) / 2);
        }

        if (Vi > Vj){
            printf("Dabriel\n");
        }

        if (Vi < Vj){
            printf("Guarte\n");
        }

        if (Vi == Vj){
            printf("Empate\n");
        }

        contador++;
    }

    return 0;
}