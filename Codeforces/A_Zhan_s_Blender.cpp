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
        int n,x, y;
        cin>>n>>x>>y;
        
        int ans = n/min(x,y);
        if( n%min(x,y) == 0) cout<<ans<<endl;
        else cout<<ans+1<<endl;
    }
    return 0;
}