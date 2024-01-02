#include<stdio.h>
int main ()
{
    int t,r1,r2,balls_left,ball_faced;
    double CRR,RRR;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&r1,&r2,&balls_left);
        ball_faced = 300 - balls_left;
        CRR = (r2 / (ball_faced/6.0));
        RRR = ((r1 - r2+1) / (balls_left/6.0));
        printf("%.2lf %.2lf\n",CRR,RRR);
    }
    return 0;
}
