#include<stdio.h>
#include<string.h>
#include<math.h>
int digit_count(int n)
{
    int reminder ,cnt = 0;
    while(n>0) {

        reminder = n%10;
        if(reminder>0){
            break;
        }
        cnt++;
        n/=10;

    }
    return cnt;
}
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--) {
            int i,num,fact=1;
            scanf("%d",&num);
            for(i=1;i<=num;i++) {
                fact=fact*i;
            }
            int size = digit_count(fact);
            printf("%d\n",size);
    }
    return 0;
}
