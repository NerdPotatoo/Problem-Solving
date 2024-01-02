#include<stdio.h>
int main()
{
    int T,N;
    scanf("%d",&T);
        while(T--)
        {
            scanf("%d",&N);
            if(N<=80)
            {
                for(int i=1;i<=N;i++)
                {
                    for(int j=1;j<=N;j++)
                    {
                        printf("*");
                    }
                        printf("\n");
                }
            }
            printf("\n");
                
        }
    return 0;
}