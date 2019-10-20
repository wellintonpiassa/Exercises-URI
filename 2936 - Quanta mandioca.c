#include <stdio.h>
int main(){
    
    int  n ,tot = 225;

    scanf("%d", &n);
    tot+= n*300;
    scanf("%d", &n);
    tot+= n*1500;
    scanf("%d", &n);
    tot+= n*600;
    scanf("%d", &n);
    tot+= n*1000;
    scanf("%d", &n);
    tot+= n*150;
    
    printf("%d\n", tot);

    return 0;
}