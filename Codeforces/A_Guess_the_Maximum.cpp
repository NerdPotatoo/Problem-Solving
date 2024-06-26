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
        int n; cin>>n;
        vector<ll> v(n), mxCount;
        for(int i = 0; i<n; i++)
        {
            cin>>v[i];
        }
        int i = 0, j = 1;
        while(i<n-1 && j<n)
        {
            mxCount.push_back(max(v[i],v[j]));
            i++;
            j++;
        }
        sort(mxCount.begin(),mxCount.end());
        cout<<mxCount[0]-1<<"\n";
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}