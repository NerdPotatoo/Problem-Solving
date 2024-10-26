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
        ll sum = 0;
        cin>>n;
        vector<ll> v(n);
        for(int i = 0; i< n; i++)
        {
            cin>>v[i];
            sum += v[i];
        }
        sort(v.begin(), v.end());

        int idx = n/2;
        ll ans = (2*v[idx]*n)-sum+1;
        if(ans < 0) ans = 0;
        int tmp = (ans+sum)/(2*n);
        if(n==2 || n== 1) ans = -1;
        cout<<ans<<endl;
    }
    return 0;
}