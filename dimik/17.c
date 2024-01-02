#include<stdio.h>
#include<string.h>
int main ()
{
    int t;
    char str[1000];
    scanf("%d",&t);
    while(t--)
    {
        int vowel = 0;
        scanf(" %[^\n]%*c", str);
        for (int i =0; i<strlen(str); i++)
        {
            if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            {
                vowel++;
            }
        }
        printf("Number of vowels = %d\n",vowel);
    }
    return 0;
}
