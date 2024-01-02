//TLE khacci
#include<stdio.h>
#include<math.h>
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        long long int n, sum = 1;
        scanf("%lld", &n);
        for(long long int i = 1; i <= sqrt(n); i++) {
            if(n % i == 0){
            sum += i;
            }
        }
            if(n == sum)
                printf("Yes, %lld is a perfect number!\n", n);
            else
                printf("NO, %lld is not a perfect number!\n", n);
    }
    return 0;
}

