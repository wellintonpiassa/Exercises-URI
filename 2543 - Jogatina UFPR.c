#include <stdio.h>
#include <stdlib.h>


int main(){
    long int N,  I = 0, i, j, somador;

    while(scanf("%ld %ld", &somador, &N) != EOF){
        I = 0;
        while(somador--){
            scanf("%ld %ld", &i, &j);
            if(i== N && j == 0){
                I++;
            }
        }
        printf("%ld\n", I);

    }


    return 0;
}