#include <stdio.h>

int main()
{
    int H, M, O, T;
    int contador = 0;

    scanf("%d", &T);

    while (contador < T)
    {
        scanf("%d %d %d", &H, &M, &O);
        
        if (O == 1){
            if (H < 10 && M >= 10)
                printf("0%d:%d - A porta abriu!\n", H,M);

            else if (H < 10 && M < 10)
                printf("0%d:0%d - A porta abriu!\n", H,M);

            else if (H >= 10 && M < 10)
                printf("%d:0%d - A porta abriu!\n", H,M);

            else if (H >= 10 && M >=10)
                printf("%d:%d - A porta abriu!\n", H,M);
        }
        
         else if (O == 0){
            
            if (H < 10 && M >= 10)
                printf("0%d:%d - A porta fechou!\n", H,M);

            else if (H < 10 && M < 10)
                printf("0%d:0%d - A porta fechou!\n", H,M);

            else if (H >= 10 && M < 10)
                printf("%d:0%d - A porta fechou!\n", H,M);

            else if (H >= 10 && M >=10)
                printf("%d:%d - A porta fechou!\n", H,M);
        }
        
        contador++;
    }

    return 0;
}