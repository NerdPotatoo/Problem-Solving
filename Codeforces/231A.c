#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][3],ques,cnt = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0; i<n; i++)
    {
        int sum = 0;
        for(int j = 0; j<3; j++)
        {
          sum+= arr[i][j];
        }
        if(sum>1) cnt++;
    }

    printf("%d\n",cnt);
    return 0;
}
