#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    while(t--) {
        char str[1000];
        scanf(" %[^\n]%*c",str);
        for(i=0; i < strlen(str); i++) {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') {
                printf("%c",str[i]);
            }
        }
        printf("\n");
        for(i=0; i < strlen(str); i++) {
            if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!=' ') {
                printf("%c",str[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
