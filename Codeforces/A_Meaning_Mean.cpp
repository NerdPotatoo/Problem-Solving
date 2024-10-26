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
        int n;
        cin>>n;
        vector<ll> v(n);
        for(int i = 0; i<n; i++) cin>>v[i];
        sort(v.begin(), v.end());
        // for(ll val : v) cout<< val<<" ";
        // cout<<endl;
        ll ans = (v[0]+v[1])/2;
        for(int i = 2; i<n; i++)
        {
            ans = (ans + v[i])/2;    
        }
        cout<<ans<<endl;
    }
    return 0;
}