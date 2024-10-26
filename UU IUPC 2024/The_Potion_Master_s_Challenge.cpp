#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll M = 1e6 + 3;

ll powMod(ll a,ll b,ll M){
    a %= M;
    if(a==0) return 0;
    ll ans = 1;
    while(b>0){
        if(b&1){
            ans = (ans*a)%M;
            --b;
        }
        a = (a*a)%M;
        b>>=1;
    }
    return ans;
    
}
ll inv(ll n, ll M){
    return powMod(n, M-2, M);
}

ll nCr(ll n, ll r){
    ll fact[n+1];
    fact[0] = 1;
    for(int i = 1; i<=n; i++){
        fact[i] = (fact[i-1]*i)%M; 
    }
    return ((fact[n] * inv(fact[r], M) % M) * inv(fact[n-r], M)) % M;
    
}

void solve()
{
    // CODE HERE
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++){
        ll n,r;
        cin>>n>>r;
        ll ans = nCr(n,r);
        cout<<"Case "<<i<<": "<<ans<<'\n';
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}