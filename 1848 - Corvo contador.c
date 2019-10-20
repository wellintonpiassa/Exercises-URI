#include <stdio.h>
#include <string.h>

int main()
{
    char receptor[7];
    int somador = 0;
    int cont = 0;
    char caw[7] = "caw caw";
    char um[] = "oi";
    char dois[] = "-*-";

    while (cont < 3)
    {
        fgets(receptor, 7, stdin);

        printf("%s\n", receptor);

        while (strcmp(receptor, caw) != 0)
        {
            if (strcmp(receptor, um) == 0){
                somador += 1; 
            }
            
            if (strcmp(receptor, dois) == 0)
                somador += 2; 

            if (strcmp(receptor, "-**") == 0)
                somador += 3; 

            if (strcmp(receptor, "*--") == 0)
                somador += 4; 

            if (strcmp(receptor, "*-*") == 0)
                somador += 5;

            if (strcmp(receptor, "**-") == 0)
                somador += 6;

            if (strcmp(receptor, "***") == 0)
                somador += 7; 

            printf("%d\n", somador);

            fgets(receptor, 7, stdin);
        }

        cont++; 
    }

    //printf("%d\n", somador);*/

    return 0;
}