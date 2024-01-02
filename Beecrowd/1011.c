#include<stdio.h>
#define pi 3.14159
int main()
{
    double r,volume;
    scanf("%lf",&r);
    volume = (4.0/3)*pi*(r*r*r);
    printf("VOLUME = %.3lf\n",volume);
    return 0;
}
