#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    if(str[0] >=97 && str[0] <= 122) {
        str[0] = 'A'+(str[0]-'a');
    }
    printf("%s",str);
    return 0;
}
