#include<stdio.h>
int main()
{
    int t,d;
    double f;
    scanf("%d%d",&t,&d);
    f  = (d/12.0) * t;
    printf("%.3lf\n",f);
    return 0;
}
