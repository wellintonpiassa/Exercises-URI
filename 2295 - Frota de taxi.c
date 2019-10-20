#include <stdio.h>

float alcool(float a, float b);
float Gas(float a, float b);

int main()
{
    float gas, alc, redgas, redalc;

    scanf("%f %f %f %f", &alc, &gas, &redalc, &redgas);
    if(alcool(alc, redalc) > Gas(gas, redgas))
        printf("A\n");
    else if(alcool(alc, redalc) < Gas(gas, redgas))
        printf("G\n");
    else
        printf("G\n");
    

    return 0;
}

float alcool(float a, float b)
{
    float result;
    return result = (b/a);
}

float Gas(float a, float b)
{
    float result;
    return result = (b/a);
}