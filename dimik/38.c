#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=i; j++)
            {
                printf("%d",m);
            }
            printf("\n");
        }
        for(int i=1; i<=n-1; i++)
        {
            for(int j=n-i; j>=1; j--)
            {
                printf(" %d",m);
            }
            printf("\n");
        }
    }

    return 0;
}
