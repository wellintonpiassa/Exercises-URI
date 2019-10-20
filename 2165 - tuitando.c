#include <stdio.h>
#include <string.h>

int main()
{

    char tweet[500];
    int x;
    
    scanf("%[^\n]s", tweet);
    x = strlen(tweet);
    if (x<=140)
        printf("TWEET\n");
    else
        printf("MUTE\n");
    

    return 0;
}