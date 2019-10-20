#include <stdio.h>

int main()
{
    int i;
    float maior = 0;
    int num_alunos;
    int aluno;

    scanf("%d", &num_alunos);

    int num_matricula[num_alunos];
    float nota[num_alunos];

    for(i = 0; i < num_alunos; i++)
    {
        scanf("%d %f", &num_matricula[i], &nota[i]);
    }

    maior = nota[0]; 
    
    for(i = 0; i < num_alunos-1; i++)
    {
        if (maior <= nota[i+1])
        {
            maior = nota[i+1];

            //printf("%f\n", maior);

            if (maior >= 8)
            {
                aluno = num_matricula[i+1];    
            }
            
        }
    }

    if(maior >= 8)
    {
        printf("%d\n", aluno);
    }

    else 
        printf("Minimum note not reached\n");
        
}