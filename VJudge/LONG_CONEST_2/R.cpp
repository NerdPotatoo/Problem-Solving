#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
     int t;
    cin >> t;
        for(int i = 1; i<=t; i++){
        float r,pi = 2*acos(0.0), area_S, area_C;
        cin >> r;
        area_S = (2*r)*(2*r);
        area_C = pi*r*r;
        float ans = area_S-area_C;
        printf("Case %d: %.2f\n", i, ans);
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}