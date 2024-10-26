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
    int t; cin >> t;
    while(t--)
    {
        int legs, tmp;
        cin>>legs;
        tmp = legs%4;
        int ans = legs/4;
        ans += (tmp/2);
        cout<<ans<<endl;
    }

    return 0;
}