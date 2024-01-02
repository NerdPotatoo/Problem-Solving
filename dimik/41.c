#include<stdio.h>
int fact(int n)
{
    int fac=1;
    for(int i=2;i<=n;i++) {
        fac*=i;
    }
    return fac;
}
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--) {
        int num;
        scanf("%d",&num);
        double n,sum = 0;
        for(int i =1;i<=num;i++) {
            sum+= i*1.0/fact(i)*1.0;
        }
        printf("%.4lf\n",sum);
    }
    return 0;
}
