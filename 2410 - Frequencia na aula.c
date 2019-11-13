#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    int vetor[n];

    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < n-1; i++){
        for(j = i; j < n-i; j++){
            if(vetor[i] == vetor[j+1]){
                n--;
            }
        }
    }

    printf("%d\n", n);

    return 0;
}