#include <stdio.h>

int main()
{
    int A; //Numero de alunos
    int C; //Numero de computadores
    int X; //Numero de computadores queimados por caio
    int Y; //Computadores que nao possuem compiladores

    scanf("%d %d %d %d", &A, &C, &X, &Y);

    if((C - X - Y) > A)
        printf("Igor feliz!\n");

    else if ((C - X - Y) <= A)
        if(X > (Y/2))
            printf("Caio, a culpa eh sua!\n");

        else
            printf("Igor bolado!\n");

    return 0;
}