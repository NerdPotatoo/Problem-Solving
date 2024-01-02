#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main ()
{
    int t,count=0;
    char str[1000];
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %[^\n]%*c",str);
        for(int i =0;i<strlen(str);i++)
        {
            if(str[i]==' '){
                count++;
            }
        }


    }
    printf("%d\n",count+1);

    return 0;
}
