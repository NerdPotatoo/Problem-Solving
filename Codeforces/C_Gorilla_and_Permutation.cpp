#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        int n, m, k;
        cin>>n>>m>>k;
        vector<int> v;
        for(int i = n; i>m; i--)
        {
            v.push_back(i);
        }
        for(int i = 1; i<=m; i++)
        {
            v.push_back(i);
        }
        for(auto x:v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
}