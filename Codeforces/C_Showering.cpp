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
        int n, s, m, flag = 0;
        cin>>n>>s>>m;
        int last = 0;
        for(int i = 1; i<=n; i++)
        {
            int l,r;
            cin>>l>>r;
            if(l-last >= s){
                flag = 1;
            }
            last = r;
        }
        if(m-last>=s) flag = 1;
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}