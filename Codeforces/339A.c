#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,n;
    char t,str[100];
    scanf("%s", str);
     n = strlen(str);
    for(i=0; i<n-1; i+=2) {
        for(j = i+2; j<n; j+=2) {
           if(str[i]>str[j]){
            t = str[i];
            str[i] = str[j];
            str[j] = t;
           }
        }
    }
    printf("%s", str);
    return 0;

}