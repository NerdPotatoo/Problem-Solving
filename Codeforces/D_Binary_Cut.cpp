#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t; cin >> t;
    while(t--)
    {
        int ans = 1, f =0;
        string s; cin >> s;
        for(int i = 0; i<s.size()-1;i++)
        {
            if(s[i]!=s[i+1]){
                ans++;
                if(s[i] == '0' && s[i+1] == '1'){
                    f = 1;
                }
            }
        }
        cout << ans - f<< '\n';
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}