#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(n<=15)
        {
            long long int fact=1;
            for(long long int i=1;i<=n;i++){
                fact=fact*i;
            }
            printf("%lld\n",fact);
        }
    }
    return 0;
}