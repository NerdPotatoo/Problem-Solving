#include<stdio.h>
#define ll long long int

int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        ll a,b,c;
        scanf("%lld%lld%lld",&a,&b,&c);
        while(a<=b){
            if(a%c==0) {
                printf("%lld\n",a);
                a+=c;
                continue;
            }
            else
                a++;
        }
        printf("\n");
    }
    return 0;
}
