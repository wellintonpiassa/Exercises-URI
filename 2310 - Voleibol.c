#include <stdio.h>

int main()
{
    int N, S, B, S1, B1, A1, contador = 0; 
    char nome[30];
    int total_saques = 0, total_bloqueios = 0, total_ataques = 0; 
    int total_s_certos = 0, total_b_certos = 0, total_a_certos = 0;

    scanf("%d", &N);

    while (contador < N)
    {
        scanf("%s", nome);

        scanf("%d %d %d", &S, &B, &A);

        scanf("%d %d %d", &S1, &B1, &A1);

        total_saques += S;
        total_bloqueios += B;
        total_ataques += A;

        total_s_certos += S1;
        total_b_certos += B1;
        total_a_certos += A1;

        contador++;
    }

    printf("Pontos de Saque: %.2f %%.\n", (total_s_certos * 100.)/total_saques);
    printf("Pontos de Bloqueio: %.2f %%.\n", (total_b_certos * 100.)/total_bloqueios);
    printf("Pontos de Ataque: %.2f %%.\n", (total_a_certos * 100.)/total_ataques);

    return 0;
}