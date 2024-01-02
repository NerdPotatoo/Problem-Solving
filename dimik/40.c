#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--) {
        int num, power;
        long long int sum = 0;
        scanf("%d%d",&num,&power);
       // if(num<=10 && power<=6) {
            for(int i =0;i<=power;i++) {
                sum+= pow(num,i);
            }
            printf("Result = %lld\n",sum);
      //  }
    }
    return 0;
}
