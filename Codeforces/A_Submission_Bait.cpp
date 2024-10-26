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
        vector<int> v(n);
        int cnt = 0, mx = 0;
        for(int i =0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        while(!v.empty())
        {
            if(v.back() >= mx)
            {
                mx = v.back();
                v.pop_back();
                cnt++;
            }
            else{
                break;
            }
        }
        if(cnt&1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}