#include<stdio.h>
#include<string.h>
int main (){
    int T;
    scanf("%d",&T);
    while(T--){
       char n[101];
       scanf("%s",n);
       int len = strlen(n);
       if(n[len-1] == '0' || n[len-1]== '2' ||n[len-1]== '4' || n[len-1]== '6' || n[len-1]== '8')
       {
        printf("even\n");
       }
       else
       {
         printf("odd\n");
       }
    }
    return 0;
}