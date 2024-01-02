#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,temp;
    scanf("%d%d%d",&a,&b,&c);
    temp = a;
    if(a<b || a<c) {
        if(b<c) {
            temp = c;
        }
        else {
            temp = b;
        }
    }
    printf("%d eh o maior\n",temp);
    return 0;
}
