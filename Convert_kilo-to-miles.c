#include<stdio.h>
int main(void)
{
    double kilo, mile;
    printf("pleas add your a number of Kilometer to convert to miles?");
    scanf("%lf",&kilo);
    mile = kilo * 0.621371;
    printf("%lf",mile);
    return 0;
}
