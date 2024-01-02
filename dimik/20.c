#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--) {
        int cnt=1;
        char str[10000];
        scanf(" %[^\n]%*c",str);
        for(int i=0;i<strlen(str);i++) {
            if(str[i]==' ') {
                cnt++;
            }
        }
        printf("Count = %d\n",cnt);
    }
    return 0;
}
