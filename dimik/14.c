#include<stdio.h>
#include<string.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int cnt = 0;
        char ch,str[10000];
        scanf(" %[^\n]%*c",str);
        scanf("%c",&ch);
        for(int i=0;i<strlen(str);i++)
        {
            if(ch==str[i])
                cnt++;
        }
        if(cnt>0)
            printf("Occurrence of '%c' in '%s' = %d\n",ch,str,cnt);
        else
            printf("'%c' is not present\n",ch);
    }
    return 0;
}
