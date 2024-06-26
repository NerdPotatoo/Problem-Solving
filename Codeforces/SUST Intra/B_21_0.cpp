#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<ll> v(n+1), ans(n+1);
        for(int i = 1; i<=n; i++)
        {
            cin>>v[i];
        }
        ans[1] = v[1];
        
        for(int i = 2; i<=n; i++)
        {
            if(i<k)
            {
                ans[i] = v[i]-ans[i-1];
            }
            else{
                int tmp = k;
                while(tmp--){
                    ans [i] = v[i]-ans[tmp];
                }

            }
        }
        for(int x:ans)
        {
            cout<<x<<" ";
        }
        cout<<"\n";
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}