#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

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
        string s;
        cin>>s;
        bool ok = false;
        int n = s.size();
        n /=2;
        n;
        for(int i = 0; i<n-1; i++)
        {
            if(s[i] != s[i+1]) {
                ok = true;
                break;
           }
        }
        
        if(ok) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}