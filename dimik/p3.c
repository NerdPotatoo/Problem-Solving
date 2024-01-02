#include<stdio.h>
int main()
{
    for(int i=1000;i>0;i--){
        if(i%5==0)
        printf("\n");
        printf("%d\t",i);
    }
    return 0;
}