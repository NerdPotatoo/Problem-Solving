#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int a[t],b[t];
    for(int i = 0; i< t; ++i){
        cin >> a[i] >> b[i];
    }
    int cnt = 0;
    for(int i = 0; i< t-1; i++){
        for(int j = i+1; j<t; j++){
            if(a[i] == b[j]){
            cnt++;
        }
        if(b[i] == a[j]){
            cnt++;
        }
        }
    }
    cout << cnt;

}