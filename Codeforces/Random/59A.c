#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char s[100];
    int i, size, cntUP = 0, cntLow = 0;

    scanf("%s", s);

    size = strlen(s);
    for(i = 0; i < size; i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            cntUP++;
        }
        else
        {
            cntLow++;
        }
    }

    if(cntUP>cntLow)
    {
        for(i =0; i < size; i++)
        {
            if(s[i]>=97 && s[i]<=122)
            {
                s[i] -= 32;
            }
        }
    }
    else if(cntUP<cntLow)
    {
        for(i =0; i < size; i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                s[i] += 32;
            }
        }
    }
    else
    {
        for(i =0; i < size; i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                s[i] += 32;
            }
        }
    }
    printf("%s\n", s);
    return 0;
}
