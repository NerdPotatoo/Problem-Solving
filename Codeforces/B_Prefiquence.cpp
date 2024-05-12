#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t; 
    cin >> t;
    while(t--)
    {
        int n,m,ans = 0,idx = 0;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        for(int i = 0; i<m; i++){
            if(a[idx] == b[i])
            {
                idx++;
                ans++;
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