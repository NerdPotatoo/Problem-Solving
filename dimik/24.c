#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--) {
        int n;
        scanf("%d",&n);
        if(n<=100) {
            int arr[n];
        for(int i=0; i<n; i++) {
            scanf("%d",&arr[i]);
        }
        for(int i =0; i<n; i+=2) {
            printf("%d ",arr[i]);
        }
        printf("\n");
        }

    }
    return 0;
}
