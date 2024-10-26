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
        int a;
        cin>>a;
        if(360%(180-a) == 0) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}