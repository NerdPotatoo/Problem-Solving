#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--) {
        char str[1000];
        scanf(" %[^\n]%*c",str);
        for(int i = strlen(str)-1;i>=0;i--) {
            printf("%c",str[i]);
        }
    }
    return 0;
}
