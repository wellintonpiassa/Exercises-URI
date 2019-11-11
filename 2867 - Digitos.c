#include<stdio.h>
#include<math.h>
int main()
{
    int n, t;
    double a, b, x;

    scanf("%d", &n);
    for(t=1; t<=n; t++)
    {
        scanf("%lf %lf", &a, &b);

        x = floor(log10(a)*b + 1);
        printf("%.0lf\n", x);
    }
    return 0;
}