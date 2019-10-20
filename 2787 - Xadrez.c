#include <stdio.h>

int main()
{
    int L;
    int C;

    scanf("%d",&L);
    scanf("%d",&C);

    if(L%2 == 0 && C%2 == 1 || L%2 == 1 && C%2 == 0){
        printf("0\n");
    }
    if(L%2 == 0 && C%2 == 0 || L%2 == 1 && C%2 == 1)
    {
        printf("1\n");
    }
       
}