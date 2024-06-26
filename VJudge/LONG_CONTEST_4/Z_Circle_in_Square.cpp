#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define end '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int t;
    cin>>t;
    double pi = 2 * acos (0.0),sq,cir,ans;
    for(int i =1; i<=t; i++)
    {
        double r;
        cin>>r;
        sq = 4*r*r;
        cir = pi*r*r;
        ans = (sq-cir) + 10e-9;
        cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<ans<<'\n';
    }

    return 0;
}