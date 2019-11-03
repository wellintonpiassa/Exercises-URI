#include <stdio.h>

int main ()
{
	int a, b, c;

	while (scanf("%d %d", &a, &b) != EOF)
	{
		if (a > b){
	        c = a;
	        a = b;
	        b = c;
        }

		if (a == b)
			printf("%d\n", b - a);
		else
			printf("%d\n", b - a - 1);
	}
    return 0;
}