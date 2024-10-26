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
        string s,t;
        cin>>s>>t;
        int i = 0,cnt = 0;
        int mn = min(s.size(),t.size())-1;
        while( i<= mn && s[i] == t[i])
        {
            cnt++;
            i++;
        }
        int ans = 0;
        if(cnt>0)
        {
            ans = s.size()+ t.size()-cnt + 1;
        }
        else{
            ans = s.size()+t.size();
        }
        cout<<ans<<endl;
    }
    return 0;
}