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
        printf("n\n");
    }
    else{
        if ((A*A) == (B*B)+(C*C)){
            printf("r\n");
        }

        if(A*A > B*B + C*C){
            printf("o\n");
        }

        if (A*A < (B*B) + (C*C)){
            printf("a\n");
        }
    }

    return 0;
}