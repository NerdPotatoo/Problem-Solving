#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n,i,k=1;
        scanf("%d",&n);
        if(n<=20)
        {
           long long int ara[n];
            for(i=0; i<n; i++)
            {
                scanf("%lld",&ara[i]);
            }
            for(i=0; i<n-1; i++)
            {
                if(ara[i]>ara[i+1])
                {
                    k=0;
                    break;
                }
            }
            if(k==1)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}
