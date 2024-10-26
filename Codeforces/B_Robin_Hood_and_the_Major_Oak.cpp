#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        ll ans = 0;
        ll n,k;
        cin>>n>>k;
        ans = n*(n+1)/2;
        ll tmp = n-k;
        ll ans2 = tmp*(tmp+1)/2;

        ans -= ans2;
        if(ans%2)cout<<"NO\n";
        else cout<<"YES\n";
        
    }
    return 0;
}