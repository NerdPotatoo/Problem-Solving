#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int TT;
    cin>>TT;
    while(TT--)
    {
        ll a,b, n, m, t, rem;
        cin>>a>>b>>n>>m;
        t = n/(m+1);
        rem = n - t*(m+1);
        ll ans = t* min(a*m, b*(m+1)) + rem*min(a,b);
        cout<<ans<<endl; 
    }
    return 0;
}