#include<stdio.h>
#define ll long long int
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        ll num,range;
        scanf("%lld%lld",&num,&range);
        if(num>range) {
            printf("Invalid!\n");
        }
        else {
            for(ll i= num; i <= range; i+=num) {
                printf("%lld\n",i);
            }
        }
        printf("\n");

    }
    return 0;
}
