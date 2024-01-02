#include<stdio.h>
int main()
{
    int T,n;
    scanf("%d",&T);
    if(T<=10)
    {
        
        for(int i=1;i<=T;i++)
        {
            scanf("%d",&n);
            printf("Case %d:",i);
            for(int j=1;j<=n;j++){
                if(n%j==0){
                    printf(" %d",j);
                }
            }
            printf("\n");
        }
    }
    return 0;
}