#include <stdio.h>

int main()
{
	long double invest, retorno;
	long double juros;
	unsigned casos = 0;

	while (scanf("%Lf %Lf", &invest, &retorno) != EOF)
	{
		juros = retorno - invest;
		juros = (juros*100) / invest;
		printf("Projeto %u:\nPercentual dos juros da aplicacao: %.2Lf %%\n", ++casos, juros);
		printf("\n");
	}
    return 0;
}