#include<stdio.h>
int main()
{
    int num,hundred,fifty,tweenty,ten,five,two,one,reminder;
    scanf("%d",&num);
    int p = num;
    hundred = num/100;
    reminder = num%100;
    fifty = reminder/50;
    reminder = reminder%50;
    tweenty = reminder/20;
    reminder = reminder%20;
    ten = reminder/10;
    reminder = reminder%10;
    five = reminder/5;
    reminder = reminder%5;
    two = reminder/2;
    reminder = reminder%2;
    one = reminder/1;
    printf("%d\n",p);
    printf("%d nota(s) de R$ 100,00\n",hundred);
    printf("%d nota(s) de R$ 50,00\n",fifty);
    printf("%d nota(s) de R$ 20,00\n",tweenty);
    printf("%d nota(s) de R$ 10,00\n",ten);
    printf("%d nota(s) de R$ 5,00\n",five);
    printf("%d nota(s) de R$ 2,00\n",two);
    printf("%d nota(s) de R$ 1,00\n",one);
    return 0;
}
