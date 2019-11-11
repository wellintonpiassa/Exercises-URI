#include <stdio.h>

int main()
{
	int casos;
	float numero, menor;
    int i;
    
	while (scanf("%d", &casos) != EOF)
	{
		menor = 100.0f;
		for (i = 0; i < casos; ++i)
		{
			scanf("%f", &numero);
			if (numero < menor)
				menor = numero;
		}

		printf("%.2f\n", menor);
    }
    return 0;
}