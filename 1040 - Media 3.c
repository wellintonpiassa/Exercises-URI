#include <stdio.h>

int main()
{
    float N1;
    float N2;
    float N3;
    float N4;
    float final;
    float exame;
    float media;

    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    media = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;

    if(media >= 5.0 && media <= 6.9){
        printf("Media: %.1f\n", media);
        printf("Aluno em exame.\n");
        scanf("%f", &exame);
        printf("Nota do exame: %.1f\n", exame);

        final = (media + exame)/2;

        if(final >= 5){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", final);
        }
        else
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", final);   
        }   
    }

    if(media >= 7.0){
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
    }

    if(media < 5.0){
        printf("Media: %.1f\n", media);
        printf("Aluno reprovado.\n");
    }

}