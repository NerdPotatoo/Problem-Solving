#include<stdio.h>
#include<string.h>
int main ()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        char str[1000];
        scanf("%s",str);
        for(int i =strlen(str)-1;i>=0;i--)
            {
                printf("%c",str[i]);
            }
        printf("\n");

    }
    return 0;
}
