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
    vector<int> v(n+1);
    for(int i = 1; i<=n;i++)
    {
        cin>>v[i];
    }
    vector<int> cnt(n+1);
    set<int> s;
    for(int i = n; i>0; i--)
    {
        s.insert(v[i]);
        cnt[i] = s.size();
    }
    int pos;
    while(m--)
    {
        cin>>pos;
        cout<<cnt[pos]<<endl;
    }
    return 0;
}