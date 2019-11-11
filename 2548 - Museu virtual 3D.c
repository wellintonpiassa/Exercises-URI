#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int soma;
	int n, m;
	int vetor[1050];

	while (scanf("%d %d", &n, &m) != EOF)
	{
		for (i = 0; i < n; ++i)
			scanf("%d", &vetor[i]);

		soma = 0;
        
		for (i = 1; i <= m; ++i)
			soma += vetor[n - i];

		printf("%d\n", soma);
	}
    return 0;
}