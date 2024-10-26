#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    string s; 
    cin >> s;
    int n = s.size(), m;
    vector<int> v(n), pref(n);
    for(int i = 1; i<n; i++)
    {
        if(s[i]==s[i-1]){
            v[i] = 1;
        }
    }
    pref[0] = v[0];
    for(int i = 1; i<n; i++)
    {
        pref[i] = v[i]+pref[i-1];
    }
    // for(auto x:pref)
    // {
    //     cout<<x<<" ";
    // }
    cin >> m;
    while( m-- )
    {
        int l, r; 
        cin >> l >> r;
        l--,r--;
        cout<<pref[r]-pref[l]<<endl;
    }

    return 0;
}