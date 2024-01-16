#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n,x;
        cin >> n >> x;
        int a[n];
        for(int i = 0; i<n; ++i){
            cin >> a[i];
        }
        sort(a,a+n);
        int sum = a[n-1], cnt = 1;
        for(int i = n-2; i >= 0; --i){
            if(sum>=x){
                break;
            }
            sum += a[i];
            cnt++;
        }
        if(sum < x){
            cout << -1 << "\n";
        }
        else{
            cout << cnt << "\n";
        }
    }
}