#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,j,n1,n2,n3;
        scanf("%d",&n1);
        int ara1[n1];
        for(i=0; i<n1; i++)
        {
            scanf("%d",&ara1[i]);
        }
        scanf("%d",&n2);
        int ara2[n2];
        for(i=0; i<n2; i++)
        {
            scanf("%d",&ara2[i]);
        }
        n3 = n1+ n2;
        int ara3[n3];
        for(i=0; i<n3; i++)
        {
            ara3[i]= ara1[i];
            if(i>=n1)
            {
                ara3[i] = ara2[i-n1];
            }
        }
        for(i= 0; i<n3-1; i++)
        {
            for(j = i+1; j<n3; j++)
            {
                if(ara3[i]>ara3[j])
                {
                    int temp = ara3[j];
                    ara3[j] = ara3[i];
                    ara3[i] = temp;
                }
            }
        }
        for(i = 0; i<n3; i++)
        {
            printf("%d ",ara3[i]);
        }
        printf("\n");
    }

    return 0;
}
