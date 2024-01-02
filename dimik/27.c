#include<stdio.h>
#include<math.h>
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n,A,reminder,arr[3],sum=0;
        scanf("%d",&n);
        A=n;
        for(int i=1; i<=3; i++)
        {
            reminder = n%10;
            arr[i-1] = reminder;
            n=n/10;
        }
        for(int i=0; i<3; i++)
        {
            sum += pow(arr[i],3);
        }
        if(sum==A)
            printf("%d is an armstrong number!\n",A);
        else
            printf("%d is not an armstrong number!\n",A);
    }
    return 0;
}
