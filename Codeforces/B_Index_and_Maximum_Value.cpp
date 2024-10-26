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
    int t; cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        vector<ll> v(n);
        for(int i = 0; i<n; i++) cin>>v[i];
        sort(v.begin(),v.end());
        ll cur_max = v[n-1];
        char op;
        ll l,r;
        vector<ll> ans;
        while(m--)
        {
            cin>>op>>l>>r;
            if(cur_max >= l && cur_max<=r)
            {
                if(op == '+') cur_max++;
                else cur_max--;
            }
            ans.push_back(cur_max);
        }
        for(ll x: ans)
        {
            cout<<x<<" ";
        }
        cout<<"\n";
    }
    return 0;
}