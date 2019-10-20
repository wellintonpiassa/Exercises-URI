#include <stdio.h>

int main()
{
    int DD;
    int MM;
    int AA;

    scanf("%d/%d/%d", &DD, &MM, &AA);

    if(DD < 10 && MM<10 && AA<10){
        printf("0%d/0%d/0%d\n", MM, DD, AA);
        printf("0%d/0%d/0%d\n", AA, MM, DD); 
        printf("0%d-0%d-0%d\n", DD, MM, AA);
    }

    if(DD < 10 && MM<10 && AA>=10){
        printf("0%d/0%d/%d\n", MM, DD, AA);
        printf("%d/0%d/0%d\n", AA, MM, DD); 
        printf("0%d-0%d-%d\n", DD, MM, AA);
    }

    if(DD < 10 && MM>=10 && AA<10){
        printf("%d/0%d/0%d\n", MM, DD, AA);
        printf("0%d/%d/0%d\n", AA, MM, DD); 
        printf("0%d-%d-0%d\n", DD, MM, AA);
    }

    if(DD>=10 && MM<10 && AA<10){
        printf("0%d/%d/0%d\n", MM, DD, AA);
        printf("0%d/0%d/%d\n", AA, MM, DD); 
        printf("%d-0%d-0%d\n", DD, MM, AA);
    }

    if(DD>=10 && MM>=10 && AA<10){
        printf("%d/%d/0%d\n", MM, DD, AA);
        printf("0%d/%d/%d\n", AA, MM, DD); 
        printf("%d-%d-0%d\n", DD, MM, AA);
    }

    if(DD>=10 && MM<10 && AA>=10){
        printf("0%d/%d/%d\n", MM, DD, AA);
        printf("%d/0%d/%d\n", AA, MM, DD); 
        printf("%d-0%d-%d\n", DD, MM, AA);
    }
    
    if(DD<10 && MM>=10 && AA>=10){
        printf("%d/0%d/%d\n", MM, DD, AA);
        printf("%d/%d/0%d\n", AA, MM, DD); 
        printf("0%d-%d-%d\n", DD, MM, AA);
    }

    if(DD>=10 && MM>=10 && AA>=10){
        printf("%d/%d/%d\n", MM, DD, AA);
        printf("%d/%d/%d\n", AA, MM, DD); 
        printf("%d-%d-%d\n", DD, MM, AA);
    }
    
    return 0;
}