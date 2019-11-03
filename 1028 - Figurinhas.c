#include <stdio.h>

int main ()
{

	int ricardo, vicente, resultado = 0;
	int casos;

	scanf("%ds", &casos);

	while (casos--)
	{

		scanf("%d %d", &ricardo, &vicente);

		// MDC simples;
		while (vicente != 0)
		{

			resultado = ricardo % vicente;
			ricardo = vicente;
			vicente = resultado;

		}

		printf("%d\n", ricardo);

	}

    return 0;
}