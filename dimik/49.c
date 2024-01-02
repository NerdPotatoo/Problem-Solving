#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        long long int  n,i,flag=0;
        scanf("%lld",&n);
        if(n<2)
            flag=0;
        for( i=2; i<=sqrt(n); i++)
        {
            if(n%i!=0)
            {
                flag =1;
                break;
            }
        }
        if(flag==1)
        {
            printf("%lld is a prime\n",n);
        }
        else
        {
            printf("%lld is not a prime\n",n);
        }
    }
    return 0;

}
