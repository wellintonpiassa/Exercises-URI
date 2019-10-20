    #include <stdio.h>

    int main()
    {
        int h1;
        int h2;

        scanf("%d %d", &h1, &h2);

        if (h1 == h2)
        {
            h1 = 24;
        }

        else if (h1 < h2){
            h1 = h2-h1;
        }

        else if (h1 > h2){
            h1 = (h2+24)-h1;
        }

        printf("O JOGO DUROU %d HORA(S)\n", h1);
    }