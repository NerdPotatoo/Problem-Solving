#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve()
{
    // CODE HERE
    int t; cin>>t;
    while(t--)
    {
        int frq[26] = {0};
        int ans = 0,n;cin>>n;
        string s; cin>>s;
        for(int i = 0; i<s.size(); i++){
            if(frq[s[i]-65]==0){
                ans+=2;
                frq[s[i]-65]++;
            }
            else{
                ans++;
                frq[s[i]-65]++;
            }
        }
        cout<<ans<<endl;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}