#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,M,sumofN,sum=0;
        scanf("%d",&n);
        int arr[n];
        for(int i=0; i<n-1; i++)
        {
            scanf("%d",&arr[i]);
        }
        M = n*(n+1);
        sumofN = M/2;
        for(int i = 0; i<n-1; i++)
        {
            sum+=arr[i];
        }
       long long int num = sumofN - sum;
        printf("%lld\n",num);
    }
    return 0;
}
