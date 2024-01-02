#include<stdio.h>
int primeCount(int n)
{
    int i, flag=0;
    if(n<2)
        flag =0;
    for(i=2;i<=sqrt(n);i++) {
        if(n%i!=0)
        {
            flag =1;
            break;
        }
    }
    return flag;
}
int main ()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int a,b,sum=0;
        scanf("%d %d",&a,&b);
        for(int i=a; i<=b; i++)
        {
           sum+=primeCount(i);
        }
        printf("%d\n",sum);

    }
    return 0;
}
