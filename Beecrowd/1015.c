#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,D,X,Y;
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    X = (x1-x2);
    Y = (y1-y2);
    D = sqrt(pow(X,2)+pow(Y,2));
    printf("%.4lf\n",D);
    return 0;

}
