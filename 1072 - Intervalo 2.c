#include <stdio.h>

int main()
{
    int N;
    int i;
    int contador_in = 0;
    int contador_out = 0;

    scanf("%d", &N);

    int X[N];

    for(i=0; i<N; i++){
        scanf("%d", &X[i]);
    }

    for(i=0; i<N; i++){
        if(X[i]<10 || X[i]>20){
            contador_out++;     
        } 
        else
        {
            contador_in++;
        }
    }

    printf("%d in\n", contador_in);
    printf("%d out\n", contador_out);
}