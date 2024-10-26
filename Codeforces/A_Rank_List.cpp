#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;
bool cmp( const pair<int,int> &p1, const pair<int,int> &p2)
{
    if(p1.first>p2.first) return 1;
    else if(p1.first == p2.first) return (p1.second<p2.second);
    return 0;
}
int32_t main()
{
    fastIO;
    // CODE HERE
    int n, k;
    cin >> n >> k;
    vector<pair<int,int>> v(n);
    for(int i = 0; i<n; i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(), v.end(),cmp);
    int cnt = 0;
    for(auto u : v){
        if(u == v[k-1]) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}