#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    int cnt = 0;
    if(n!=0){
        cnt += n/100;
        n = n%100;
    }
    if(n!=0){
        cnt += n/20;
        n = n%20;
    }
    if(n!=0){
        cnt += n/10;
        n = n%10;
    }
    if(n!=0){
        cnt += n/5;
        n = n%5;
    }
    if(n!=0){
        cnt += n/1;
        n = n%1;
    }
    cout << cnt;
}