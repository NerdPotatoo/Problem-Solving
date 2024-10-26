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
        bool flag = true;
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0; i<n; i++)
        {
            cin>>v[i];
            if(i > 0)
            {
               if(v[i] != n)
               {
                if(v[v[i]] == 0 && v[v[i]-2] == 0) flag = false;
               }
               else{
                if(v[v[i]-2]==0 ) flag = false;
               }
            }
        }
        if(flag) cout<<"YES\n";
        else cout << "NO\n";
    }

    return 0;
}