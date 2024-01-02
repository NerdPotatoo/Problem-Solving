#include<stdio.h>
int main()
{
    int t,n1,n2,n3,L,M,S,i=1;
    scanf("%d",&t);
    while(t--)
    {
       scanf("%d",&n1);
       scanf("%d",&n2);
       scanf("%d",&n3);

       if(n1>n2 && n1>n3)
       {
           L = n1;
           if(n2>n3)
           {
               M = n2;
               S = n3;
           }
           else
           {
               M = n3;
               S = n2;
           }

       }
        else if(n2>n1 && n2>n3)
       {
           L = n2;
           if(n1>n3)
           {
               M = n1;
               S = n3;
           }
           else
           {
               M = n3;
               S = n1;
           }

       }
        else if(n3>n1 && n3>n2)
       {
           L = n3;
           if(n1>n2)
           {
               M = n1;
               S = n2;
           }
           else
           {
               M = n2;
               S = n1;
           }

       }
    printf("Case %d: %d %d %d\n",i++,S,M,L);


    }
    return 0;

}
