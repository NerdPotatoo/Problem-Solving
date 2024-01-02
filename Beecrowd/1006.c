#include<stdio.h>
int main()
{
    double x,y,z,avg;
    scanf("%lf%lf%lf",&x,&y,&z);
    avg = (x*2+y*3+z*5)/(2+3+5);
    printf("MEDIA = %.1lf\n",avg);
    return 0;
}
