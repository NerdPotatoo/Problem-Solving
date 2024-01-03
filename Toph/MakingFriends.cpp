#include<bits/stdc++.h>
#include<numeric>
using namespace std;

int main(){
    int n, i, cnt = 0;
    cin>>n;
    for(i = 1; i<=n/2; i++){
        if(n%i==0){
            cnt++;
        }
    }
    cout<<cnt;
}