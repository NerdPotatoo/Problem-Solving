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
        int n,m;
        cin>>n;
        vector<ll> v(n);
        for(int i = 0; i<n; i++) cin>>v[i];
        cin>>m;
        while(m--)
        {
            string s;
            cin>>s;
            if(s.size() != n) {
                cout<<"NO\n";
                continue;
            }
            map<char,ll> mp;
            bool flag = true;
            for(int i = 0; i<n; i++)
            {
                if(mp[s[i]] == 0 || mp[s[i]] == v[i])
                {
                    mp[s[i]] = v[i];
                }
                else{
                    flag = false;
                    break;
                }
            }
            if(flag) cout<<"YES\n";
            else cout<<"NO\n";
        }

    }
    return 0;
}