#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t; cin >> t;
    while(t--)
    {
        int ans = 1;
        string s; cin >> s;
        for(int i = 0; i<s.size();i++)
        {
            if(s[i]=='1' && s[i+1] =='0'){
                ans++;
                
            }
        }
        cout << ans << '\n';
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}