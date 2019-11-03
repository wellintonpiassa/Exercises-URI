#include <stdio.h>
#include <string.h>

int main()
{
    char entrada[50];
    
    while(scanf("%s", entrada) != EOF)
    {  

        if (strcmp(entrada, "brasil") == 0)
            printf("Feliz Natal!\n");

        else if (strcmp(entrada, "alemanha") == 0)
            printf("Frohliche Weihnachten!\n");

        else if (strcmp(entrada, "austria") == 0)
            printf("Frohe Weihnacht!\n");

        else if (strcmp(entrada, "coreia") == 0)
            printf("Chuk Sung Tan!\n");

        else if (strcmp(entrada, "espanha") == 0)
            printf("Feliz Navidad!\n");

        else if (strcmp(entrada, "grecia") == 0)
            printf("Kala Christougena!\n");

        else if (strcmp(entrada, "estados-unidos") == 0)
            printf("Merry Christmas!\n");

        else if (strcmp(entrada, "inglaterra") == 0)
            printf("Merry Christmas!\n");

        else if (strcmp(entrada, "australia") == 0)
            printf("Merry Christmas!\n");

        else if (strcmp(entrada, "portugal") == 0)
            printf("Feliz Natal!\n");

        else if (strcmp(entrada, "suecia") == 0)
            printf("God Jul!\n");

        else if (strcmp(entrada, "turquia") == 0)
            printf("Mutlu Noeller\n");

        else if (strcmp(entrada, "argentina") == 0)
            printf("Feliz Navidad!\n");
        
        else if (strcmp(entrada, "chile") == 0)
            printf("Feliz Navidad!\n");

        else if (strcmp(entrada, "mexico") == 0)
            printf("Feliz Navidad!\n");

        else if (strcmp(entrada, "antardida") == 0)
            printf("Merry Christmas!\n");
        
        else if (strcmp(entrada, "canada") == 0)
            printf("Merry Christmas!\n");

        else if (strcmp(entrada, "irlanda") == 0)
            printf("Nollaig Shona Dhuit!\n");

        else if (strcmp(entrada, "belgica") == 0)
            printf("Zalig Kerstfeest!\n");

        else if (strcmp(entrada, "italia") == 0)
            printf("Buon Natale!\n");

        else if (strcmp(entrada, "libia") == 0)
            printf("Buon Natale!\n");

        else if (strcmp(entrada, "siria") == 0)
            printf("Milad Mubarak!\n");

        else if (strcmp(entrada, "marrocos") == 0)
            printf("Milad Mubarak!\n");

        else if (strcmp(entrada, "japao") == 0)
            printf("Merii Kurisumasu!\n");
        
        else 
            printf("--- NOT FOUND ---\n");
    }

    return 0; 
}