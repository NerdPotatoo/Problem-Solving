#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    ll n,k, ans;
    cin>>n>>k;
    if(n%2 == 0){
        n /= 2;
    }
    else{
        n = (n/2) + 1;
    }
    if(k>n){
        k-=n;
        ans = 2 +2*(k-1);
    }
    else{
        ans = 1 + 2*(k-1);
    }
    cout<< ans<<"\n";
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}