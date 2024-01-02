#include<stdio.h>
#include<string.h>
void findfrequency(char s[])
{
    int i=0;
    int arr[26] = {0};
    while(s[i]!='\0') {
        arr[s[i] -'a']++;
        i++;
    }
    for(int i=0;i<26;i++) {
        if(arr[i]!=0) {
            printf("%c = %d\n",i+'a',arr[i]);
        }
    }

}
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        char str[1000];
        scanf("%s",str);
        findfrequency(str);
       // printf("\n");
    }
    return 0;
}
