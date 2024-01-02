#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        long long int p,q,c,temp,mod;
        scanf("%lld%lld%lld",&p,&q,&c);
        temp = pow(p,q);
        mod = temp%c;
        printf("Result = %lld\n",mod);
    }
    return 0;
}
