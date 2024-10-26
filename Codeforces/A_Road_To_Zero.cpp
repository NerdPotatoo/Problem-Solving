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
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
        ll ans = 0;

            if(x!=y && x != 0)
            {
                ans = abs(x-y);
                ans *= a;
                ll tmp = min(x,y);
                ans += (tmp*b);
            }
            else{
                ans = (x*b);
            }
        
        cout<<ans<<endl;
    }
    return 0;
}