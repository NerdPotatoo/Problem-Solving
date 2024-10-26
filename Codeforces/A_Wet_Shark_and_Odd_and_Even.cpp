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
    int n;
    cin>>n;
    ll a, sum = 0, mn_odd = INT_MAX;
    for(int i = 1; i<=n; i++)
    {
        cin>>a;
        if(a&1) mn_odd = min(a,mn_odd);
        sum += a;
    }

    if(sum&1)
    {
        cout<<sum-mn_odd<<endl;
    }
    else{
        cout<<sum<<endl;
    }
    return 0;
}