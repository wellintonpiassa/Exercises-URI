#include <stdio.h>

int main() 
{
	unsigned int saida, voo;
  	int fuso;

  	scanf("%d %d %d", &saida, &voo, &fuso);

  	if(saida == 0) 
		saida = 24;
  
	saida = ((saida + voo + fuso) % 24);

  	printf("%d\n",saida);

	return 0;
}