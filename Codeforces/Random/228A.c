#include<stdio.h>
int main()
{
    long long int i,j,cnt = 0;
    long long int a[4];
    for(i = 0; i < 4; i++) {
        scanf("%lld", &a[i]);
    }
    for(i = 0; i<3; i++){
        for(j = i+1; j<4; j++){
            if(a[i]>a[j]){
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for(i = 0; i < 3; i++){
        if(a[i] == a[i+1]){
            cnt++;
        }
    }
    printf("%lld",cnt);
    return 0;
}