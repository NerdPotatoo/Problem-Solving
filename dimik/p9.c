#include<stdio.h>
int main()
{
    int t,n,s,check;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        s = sqrt(n);
        check = s*s;
        if(check == n)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;

}
