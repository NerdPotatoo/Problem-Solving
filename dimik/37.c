#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--) {
        int n,rev=0,rm;
        scanf("%d",&n);
        while(n>0) {
            rm = n%10;
            rev = (rev*10)+rm;
            n= n/10;
        }
        printf("%d\n",rev);

    }
    return 0;
}
