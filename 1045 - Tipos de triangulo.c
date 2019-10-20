#include <stdio.h>
#include <math.h>

int main()
{
    float A;
    float B;
    float C;
    float aux = 0;

    scanf("%f %f %f", &A, &B, &C);
    
    //ORDENANDO DECRESCENTEMENTE
    if(B > A){
        aux = A;
        A = B;
        B = aux;
    }
    if(B < C){
        aux = B;
        B = C;
        C = aux;
    }

    if(B > A){
        aux = A;
        A = B;
        B = aux;
    }

    //printf("%f %f %f", A, B, C);

    //CONDICOES
    if (A >= (B+C)){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if ((A*A) == (B*B)+(C*C)){
            printf("TRIANGULO RETANGULO\n");
        }

        if(A*A > B*B + C*C){
            printf("TRIANGULO OBTUSANGULO\n");
        }

        if (A*A < (B*B) + (C*C)){
            printf("TRIANGULO ACUTANGULO\n");
        }

        if (A == B && A == C && B == C){
            printf("TRIANGULO EQUILATERO\n");
        }

        if (A == B && B != C || B == C && A != C || A == C && B != A){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
}