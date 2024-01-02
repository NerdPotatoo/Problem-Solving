#include<stdio.h>
#include<string.h>
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
       char word[1000], reverse_word[1000];
       int i, j, len;
       scanf("%s", word);
       len = strlen(word);
       for(i=0, j=len-1;i<len;i++,j--){
        reverse_word[i] = word[j];
       }
       reverse_word[i]='\0';
       if(0 == strcmp(word, reverse_word))
       {
           printf("Yes! It is palindrome!\n");
       }
       else
       {
           printf("Sorry! It is not palindrome!\n");
       }
    }
    return 0;
}
