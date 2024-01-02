#include<stdio.h>
#include<string.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
    char str[100];
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='A' && str[i]<='Z'){
                int alpha = str[i]-64;
            printf("%d",alpha);
        }
    }
    printf("\n");
    }
    return 0;
}
