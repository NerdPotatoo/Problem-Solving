#include<stdio.h>

int main()
{
    long long int n,x;
    scanf("%lld",&n);

    x = 1+~-n/5;
    printf("%lld\n",x);

    return 0;
}