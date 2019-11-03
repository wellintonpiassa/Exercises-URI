#include <stdio.h>

void flush_in(){ 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){} 
}

int main()
{
    int N, G, X;
    int i, j;
    int somador = 0;
    char scan;

    scanf("%d %d", &N, &G);

    char W[N];
    int V[N];
    
    //FOR 1 
    for(i = 0; i < N; i++){
        flush_in();
        scanf("%c %d", &W[i], &V[i]);
    }

    flush_in();
    scanf("%d", &X);

    //FOR 2
    for(i = 0; i < X; i++)
    {  
        flush_in();
        scanf("%c", &scan);    

        for(j = 0; j < X; j++)
        {
            if(scan == W[j]){
                somador += V[j];
            }
        }
    }

    printf("%d\n", somador);

    
}