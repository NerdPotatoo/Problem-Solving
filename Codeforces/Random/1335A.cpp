#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--) {
        ll n, ans;
        cin >> n;
        if(n%2 == 0) {
            ans = (n/2) - 1;
        }
        else {
            ans = n/2;
        }
        cout << ans << "\n";
    }
}