#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int A, B, C, maior = 0, menor1 = 0, menor2 = 0;

    scanf("%lld %lld %lld", &A, &B, &C);

    //VERIFICANDO MAIOR NUMERO DENTRE OS ELEMENTOS DE ENTRADA
    if (A > B)
    {
        if (B > C)
        {
            maior = A;
            menor1 = B;
            menor2 = C;
        }

        else {
            if (A > C)
            {
                maior = A;
                menor1 = C;
                menor2 = B;
            }

            else 
            {
                maior = C;
                menor1 = A;
                menor2 = B;
            }
        }
    }

    else
    {
        if (B > C)
        {
            if (A > C)
            {
                maior = B;
                menor1 = A;
                menor2 = C;
            }

            else
            {
                maior = B;
                menor1 = C;
                menor2 = A;
            }
            
        }

        else
        {
            maior = C;
            menor1 = B;
            menor2 = A;
        }
        
    }

    //VERIFICACAO SE É ATENDE TODOS OS REQUISITOS PARA VERIFICACAO SE É UM TRIANGULO
    if (abs(B-C) < A && A < B+C &&  abs(A-C) < B && B < A+C && abs(A-B) < C && C < A+B)
    {
        //VERIFICACAO PARA SABER SE É UM TRIANGULO ESCALENO
        if(A != B && B != C && A != C)
        {
            printf("Valido-Escaleno\n");

            if((maior*maior) == (menor1*menor1) + (menor2*menor2))
                printf("Retangulo: S\n");

            else
                printf("Retangulo: N\n");
        }
        
        //VERIFICACAO DO TRINAGULO EQUILATERO
        if (A == B && B == C && A == C)
        {
            printf("Valido-Equilatero\n");

            if((maior*maior) == (menor1*menor1) + (menor2*menor2))
                printf("Retangulo: S\n");

            else
                printf("Retangulo: N\n");
            
        }

        //VERIFICACAO DO TRIANGULO ISOSCELES
        if (A == B && A != C && B != C || A == C && A != B && C != B || B == C && A != B && C != A)
        {
            printf("Valido-Isoceles\n");

            if((maior*maior) == (menor1*menor1) + (menor2*menor2))
                printf("Retangulo: S\n");

            else
                printf("Retangulo: N\n");
        } 
    }       
        
    else
        printf("Invalido\n");
    
    return 0;
}