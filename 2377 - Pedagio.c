#include <stdio.h>

int main()
{

	unsigned short comprimento, distPedagios;
	unsigned short custoKm, custoPedagio;

	scanf("%hu %hu", &comprimento, &distPedagios);
	scanf("%hu %hu", &custoKm, &custoPedagio);

	printf("%u\n", (comprimento * custoKm) + ((comprimento / distPedagios) * custoPedagio));

    return 0;
}