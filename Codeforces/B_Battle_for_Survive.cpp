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
        ll a, ans = 0, tmp = 0;
        for(int i = 0; i<n; i++) {
            cin>>a;
            if(i<n-2)
            {
                tmp += a;
            }
            if(i == n-2)
            {
                ans += a - tmp;
            }
            if(i == n-1)
            {
                ans = a - ans;
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}