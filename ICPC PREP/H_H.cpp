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
        vector<ll> a(n*2);
        for(int i = 0; i<n*2; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        ll ans = 0, i = 0, j = (2*n)-1;
        while(i<=j)
        {
            ans += abs(a[i]-a[j]);
            i++;
            j--;
        }
        cout<<ans<<endl;
    }
    return 0;
}