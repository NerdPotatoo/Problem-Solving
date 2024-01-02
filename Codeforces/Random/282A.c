#include<stdio.h>
int main()
{
    int n, x = 0;

    scanf("%d", &n);
    while(n--)
    {
        char s[4];
        scanf("%s", s);
        if(s[1]=='+')
        {
            x+=1;
        }
        else
        {
            x-=1;
        }

    }
    printf("%d\n",x);
    return 0;
}
