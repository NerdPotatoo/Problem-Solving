#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int n, m;
    cin>>n>>m;
    map<string, string> mp;
    string a,b;
    for(int i = 0; i<m; i++)
    {
        cin>>a>>b;
        if(a.size()<=b.size()) mp[a] = a;
        else mp[a] = b;
    }
    while(n--)
    {
        cin>>a;
        cout<<mp[a]<<" ";
    }
    return 0;
}