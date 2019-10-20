#include <stdio.h>

int main()
{
		
	int N,N0,nfat,cont;

	scanf("%d", &N);

	cont = 1;
	nfat = 1;
	N0 = 1;

		
	while(cont < N)
    {
	    nfat=(N0+1)*nfat;
		cont = cont+1;
		N0 = N0+1;
			
	}
		
	printf("%d\n", nfat);
}