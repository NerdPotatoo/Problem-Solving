//TLE khacci
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
        for(ll i=1;i<=c;i++){
            if(i%a==0 && i%b==0) {
                printf("%lld\n",i);
            }
        }
        printf("\n");
    }
    return 0;
}

