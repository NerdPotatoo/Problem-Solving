#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define end '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++)
    {
        int me, lft, ans = 19;
        cin>>me>>lft;
        if(lft<me)
        {
            ans += (me-lft)*4;
            ans += me*4;
        }
        else{
            ans+= lft*4;
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
    }

    return 0;
}