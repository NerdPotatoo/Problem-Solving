#include<stdio.h>
int main()
{
    char ch;
    int T;

    scanf("%d",&T);
    while(T--)
    {

        scanf("%s",&ch);
        if(ch>= 'a' && ch<= 'z')
        {
            printf("Lowercase Character\n");
        }
        else if (ch>= 'A' && ch<='Z')
        {
            printf("Uppercase Character\n");
        }
        else if(ch>='0' && ch<='9')
        {
            printf("Numerical Digit\n");
        }
        else
        {
            printf("Special Character\n");
        }
    }
    return 0;
}
