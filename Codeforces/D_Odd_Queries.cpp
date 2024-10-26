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
        int n,q;
        cin>>n>>q;
        vector<ll> v(n);
        for(int i = 0; i<n; i++)
            cin>>v[i];
        vector<ll> pre(n);
        pre[0] = v[0];

        for(int i = 1; i<n; i++)
            pre[i] = v[i]+pre[i-1];

        while(q--)
        {
            int l,r,k;
            ll ans = 0;
            cin>>l>>r>>k;
            ll sum = k * ((r-l) +1);
            if(l==1)
            {
                ans = pre[n-1] - pre[r-1] + sum;
            }
            else
            {
                ans = pre[n-1] - (pre[r-1] - pre[l-2]) +sum;
            }
            if(ans&1) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}