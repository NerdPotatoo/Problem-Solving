#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char str[5];
        scanf("%s",str);
        int first = str[0]- '0';
        int last = str[strlen(str)-1]- '0';
        printf("Sum = %d\n",first + last);
        
    }
    return 0;
}