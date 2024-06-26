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
        int n;
        cin>>n;
        vector<int>a,b;
        for(int i = 0; i<n; i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i = 0; i<n; i++)
        {
            int x;
            cin>>x;
            b.push_back(x);
        }
        int ans = 0;
        for(int i =0; i<n; i++)
        {
            if(a[i]>b[i]){
                a.pop_back();
                a.push_back(b[i]);
                sort(a.begin(),a.end());
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