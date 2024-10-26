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
    int n; cin >> n;
    string s, t; cin >> s;
    map<string, int> cnt;
    t.clear();
    for(int i = 0; i<s.size()-1; i++)
    {
        t = s[i];
        t += s[i+1];
        cnt[(string)t]++;
        t.clear();
    }
    int u = 0;
    for(auto x:cnt)
    {
        // cout<<x.first<<" "<<x.second<<endl;
        if(u<x.second)
        {
            u = x.second;
            t = x.first;
        }
    }
     cout<<t<<endl;

    return 0;
}