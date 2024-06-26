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
        int n, m;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<int>freq(7,0);
        for(int i = 0; i<s.size(); i++)
        {
            freq[s[i]-'A']++;
        }
        int ans = 0;
        for(int i = 0; i<7; i++)
        {
            if(freq[i]<m){
                ans += m-freq[i];
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