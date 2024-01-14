#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n1,n2,sum = 0;
        cin >> n1 >>n2;
        for(ll i=1; i<=n2; i++){
            sum += n1;
        }
        cout << sum << "\n";
    }
}